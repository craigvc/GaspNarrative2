// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "NinjaInputBufferComponent.h"
#include "NinjaInputTags.h"
#include "Interfaces/InputModeAwareInterface.h"
#include "Types/EInputAnalogStickBehavior.h"
#include "Types/FProcessedBinding.h"
#include "Types/FProcessedInputSetup.h"
#include "NinjaInputManagerComponent.generated.h"

class APawn;
class UEnhancedInputComponent;
class UArrowComponent;
class UEnhancedInputLocalPlayerSubsystem;
class UNinjaInputHandler;
class UNinjaInputSetupDataAsset;
class UInputMappingContext;
class UInputAction;
class UInputComponent;

// Log category for the Input Manager Component.
//
// This component can output a lot of verbose/very verbose information and if you are interested in
// using these messages for debugging, you can enable this category in your DefaultEngine.ini file:
//
// [Core.Log]
// LogNinjaInputManagerComponent=VeryVerbose
//
DECLARE_LOG_CATEGORY_EXTERN(LogNinjaInputManagerComponent, Log, All);

/**
 * Manages Input Contexts and delegates Input Actions to Input Handlers registered to this component.
 */
UCLASS(ClassGroup = NinjaInput, meta = (BlueprintSpawnableComponent))
class NINJAINPUT_API UNinjaInputManagerComponent : public UNinjaInputBufferComponent, public IAbilitySystemInterface,
	public IInputModeAwareInterface
{

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInputModeChangedSignature, FGameplayTag, InputMode);
	
	GENERATED_BODY()

public:

	/**
	 * The tag name used to find Arrow Components that represent a forward direction.
	 * 
	 * This is useful for top-down or similar games, where the controller or actor direction
	 * vectors won't properly reflect the direction should move towards.
	 */
	static FName ForwardReferenceTag;

	/** Notifies a change in the current input mode. */
	UPROPERTY(BlueprintAssignable)
	FInputModeChangedSignature OnInputModeChanged;
	
	UNinjaInputManagerComponent();

	// -- Begin Actor Component implementation
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	// -- End Actor Component implementation
	
	// -- Begin Player Input Mode Aware interface
	virtual FGameplayTag GetPlayerInputMode_Implementation() const override;
	virtual void SetPlayerInputMode_Implementation(FGameplayTag InputModeTag) override;
	// -- End Player Input Mode Aware interface

	/**
	 * Informs if Inputs are currently being processed for this player.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Input|Manager Component")
	bool ShouldProcessInputs() const { return bShouldProcessInputs; }

	/**
	 * Enables all inputs for the player.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Input|Input Manager Component")
	void EnableInputProcessing();

	/**
	 * Disables all inputs for the player.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Input|Input Manager Component")
	void DisableInputProcessing();

	/**
	 * Informs if this Input Manager Component is processing inputs from keyboard and mouse.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Input|Manager Component")
	bool IsUsingKeyboardAndMouse() const { return CurrentInputModeTag == Tag_Input_Mode_KeyboardAndMouse; }

	/**
	 * Informs if this Input Manager Component is processing inputs from a gamepad.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Input|Manager Component")
	bool IsUsingGamepad() const { return CurrentInputModeTag == Tag_Input_Mode_Gamepad; }
	
	/**
	 * Provides the owner's Forward Reference.
	 */
	UFUNCTION(BlueprintPure, BlueprintNativeEvent, Category = "Ninja Input|Manager Component")
	FVector GetForwardVector() const;

	/**
	 * Provides the owner's Right Reference.
	 */
	UFUNCTION(BlueprintPure, BlueprintNativeEvent, Category = "Ninja Input|Manager Component")
	FVector GetRightVector() const;

    /**
     * Provides the last input vector handled by the owner.
     *
     * By default, it will retrieve the value from the owner's Pawn Movement Component
     * but this can be overriden by implementing the "Last Input Vector Provider Interface"
     * in the Pawn related to this component.
     *
     * @return
     *      The last input vector that was handled by the owning pawn.
     */
    UFUNCTION(BlueprintPure, Category = "Ninja Input|Manager Component")
    FVector GetLastInputVector() const;
    
	/**
	 * Provides the pawn that owns this component.
	 *
	 * This function is able to retrieve the pawn even if this component is attached to actors
	 * that are not pawns, such as Controllers or Player States.
	 *
	 * @return
	 *		The Pawn that owns this component. It may be the owning actor or the pawn related
	 *		to a Controller or to a Player State. It will ultimately ensure that is not null.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Input|Input Manager Component")
	APawn* GetPawn() const;

	/**
	 * Provides the controller that owns this component.
	 *
	 * This function is able to retrieve the controller, regardless of the actor that owns
	 * it, which may be a Pawn, a Controller or a Player State.
	 *
	 * @return
	 *		The Controller that owns this component. It may be retrieved from the owning Pawn,
	 *		Player State or the owning controller itself. It will ensure that is not null.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Input|Input Manager Component")
	AController* GetController() const;

    /**
     * Checks if this component is running with a local controller.
     *
     * @return
     *      A boolean informing if this Manager Component has a locally-controlled owner.
     */
    UFUNCTION(BlueprintPure, Category = "Ninja Input|Manager Component")
    bool IsLocallyControlled() const;
    
	/**
	 * Provides the Ability System Component from this component's owner.
	 *
	 * Please note that this component is a valid implementation of the Ability System Interface.
	 *
	 * @return
	 *      The Ability System Component, provided by the owner, via the ASC Interface.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Input|Input Manager Component")
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
    
    /**
     * Retrieves the Enhanced Input Subsystem for the provided controller.
     *
     * @return
     *      The Enhanced Input Subsystem. retrieved from the Controller's Local Player.
     */
    UFUNCTION(BlueprintPure, Category = "Ninja Input|Manager Component")
    static UEnhancedInputLocalPlayerSubsystem* GetEnhancedInputSubsystem(const AController* Controller);
    
    /**
     * Checks if a given Setup Data ir registered to this component.
     *
     * @param SetupData
     *      Setup Data Asset to be evaluated.
     *
     * @return
     *		A boolean value informing if the provided Setup Data was already
     *		registered to this component. 
     */
    UFUNCTION(BlueprintPure, Category = "Ninja Input|Input Manager Component")
    bool HasSetupData(const UNinjaInputSetupDataAsset* SetupData) const;
    
	/**
	 * Checks if a given Input Mapping Context is registered for the current owner.
	 *
	 * @param InputMappingContext
	 *		Input Mapping Context to be checked. Must be provided.
	 * 
	 * @return
	 *		A boolean value informing if the provided Mapping Context was already
	 *		registered to the current Local Player.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Input|Input Manager Component")
	bool HasInputMappingContext(const UInputMappingContext* InputMappingContext) const;

    /**
     * Checks if this component has a handler compatible with a given Action/Trigger Event.
     *
     * @param InputAction
     *      Input Action to be checked. Must be provided.
     *
     * @param TriggerEvent
     *      Trigger Event compatible with the action. Must be provided.
     *
     * @return
     *      A boolean value informing if the providing combination of Input Action and
     *      Trigger Event can be dispatched to any of the internal Input Handlers.
     */
    UFUNCTION(BlueprintPure, Category = "Ninja Input|Input Manager Component")
    bool HasCompatibleInputHandler(const UInputAction* InputAction, const ETriggerEvent& TriggerEvent) const;

    /**
     * Processes a Setup Data, registering its Input Contexts and Handlers.
     *
     * @param SetupData
     *      The new setup data to be added. If this setup Data was already registered, then
     *      it will be safely ignored, without errors being thrown.
     */
    UFUNCTION(BlueprintCallable, Category = "Ninja Input|Input Manager Component")
    void AddInputSetupData(const UNinjaInputSetupDataAsset* SetupData);

    /**
     * Removes a Setup Data previously registered.
     *
     * @param SetupData
     *      Setup data to be removed from this component. If not registered, then nothing
     *      will happen and no errors will be thrown.
     */
    UFUNCTION(BlueprintCallable, Category = "Ninja Input|Input Manager Component")
    void RemoveInputSetupData(const UNinjaInputSetupDataAsset* SetupData);

	/**
	 * Provides the current Analog Stick Behavior set for this input manager.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Input|Input Manager Component")
	EInputAnalogStickBehavior GetAnalogStickBehavior() const { return AnalogStickBehavior; }

	/**
	 * Sets the Analog Stick Behavior set for this input manager.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Input|Input Manager Component")
	void SetAnalogStickBehavior(EInputAnalogStickBehavior NewAnalogStickBehavior);	
	
    /**
     * Sends a Gameplay Event to the owner's ASC.
     *
     * @param GameplayEventTag
     *      Gameplay Tag used to identify the event.
     *
     * @param Value
     *      Input value that has triggered this event. It will be provided in the event's
     *      Payload as the event's value for its Magnitude attribute.
     *
     * @param InputAction
     *      The Input Action that has triggered this event. It will be provided in the event's
     *      Payload as the first Optional Object.
     *
     * @param bSendLocally
     *      Determines if this event should be triggered locally, in case of a non-authoritative
     *      local Player Controller. Defaults to true.
     *
     * @param bSendToServer
     *      Determines if this event should be triggered on the server in case of a local Player
     *      Controller not having authoritative privileges over the actor. Defaults to true.
     *
     * @return
     *      The number of Ability Activations triggered by this event. The number is only accurate
     *      for the local activations, but further activations may happen after an eventual RPC
     *      is sent out, if necessary, to the authoritative version.
     */
    UFUNCTION(BlueprintCallable, Category = "Ninja Input|Input Manager Component")
    int32 SendGameplayEventToOwner(const FGameplayTag& GameplayEventTag, const FInputActionValue& Value,
        const UInputAction* InputAction, bool bSendLocally = true, bool bSendToServer = true) const;
	
protected:

	/** The input component bound to this manager. */
	UPROPERTY()
	TObjectPtr<UEnhancedInputComponent> InputComponent;

    /**
     * All data assets that will contribute to this Input Manager's setup.
     *
     * Data Assets are unique and the component ensures they are not duplicated in
     * this array. There are exposed functions to check for specific Data Assets and
     * also to register/unregister them.
     */
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
    TArray<TObjectPtr<UNinjaInputSetupDataAsset>> InputHandlerSetup;

	/**
	 * If set to true, always clears all input setups when a pawn is un-possessed by a controller.
	 *
	 * If you are always swapping your input setups between pawns (i.e. players, horses, etc.), then
	 * you might want to consider auto-clearing all of them. However, if you aggregate your inputs,
	 * then you need to deliberately clear them in your controller.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	bool bAutoClearOnUnPosses;

	/**
	 * Determines if this component will create a forward reference for pawns.
	 *
	 * Forward references are useful when the axis has to be obtained from a static position,
	 * which is commonly the cased for top-down games.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	bool bShouldCreateForwardReference;

	/**
	 * If set to true rotates the current controller to the mouse position.
	 *
	 * Useful for twin-stick setups or similar. When enabled, you can also determine the Rotation
	 * Speed for the interpolation/smooth movement.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	bool bShouldRotateControllerToMouseCursor;
	
	/** Collision Channel used to project the mouse cursor in the world. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input", meta = (EditCondition = "bShouldRotateControllerToMouseCursor"))
	TEnumAsByte<ECollisionChannel> MouseChannel;
	
	/** The speed used to smoothly interpolate the control rotation to face the mouse cursor. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input", meta = (EditCondition = "bShouldRotateControllerToMouseCursor"))
	float ControlRotationInterpSpeed;

	/** How input is normalized for analog sticks. This is analogous to the GASP sample. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	EInputAnalogStickBehavior AnalogStickBehavior;
	
	/**
	 * Initializes for a new controller that has been received.
	 * 
	 * @param NewController
	 *		The new controller, that will be saved to the internal reference.
	 */
	void InitializeController(AController* NewController);
	
    /**
     * Entrypoint for the component's initialization. 
     */
    void SetupInputComponent(UInputComponent* NewInputComponent);

	/**
	 * Adds (and clears) all the cached setup data.
	 */
	void AddCachedInputSetupData();
	
    /**
     * Registers a new Input Mapping Context and process necessary bindings.
     *
     * @param InputMappingContext
     *      Setup Data Asset that is providing the Mapping Context to be registered.
     *      
     * @param Priority
     *		Priority assigned to the new context. As per the Enhanced Input Component,
     *		higher priority contexts will be processed first.
     *
     * @param OutBindings
     *      Output parameter containing all generated bindings.
     */
    void AddInputMappingContext(const UInputMappingContext* InputMappingContext, int32 Priority, TArray<FProcessedBinding>& OutBindings);

    /**
     * Dispatches an action to a registered Input Handler for the Started Event.
     *
     * We need to differentiate the event in the function level, as just relying on the Action
     * Instance may lead to incorrect triggered, since multiple events can happen in the same frame.
     * 
     * @param ActionInstance
     *      Details about the Action that must be processed.
     */
    UFUNCTION()
    void DispatchStartedEvent(const FInputActionInstance& ActionInstance);

    /**
     * Dispatches an action to a registered Input Handler for the Started Event.
     *
     * We need to differentiate the event in the function level, as just relying on the Action
     * Instance may lead to incorrect triggered, since multiple events can happen in the same frame.
     * 
     * @param ActionInstance
     *      Details about the Action that must be processed.
     */
    UFUNCTION()
    void DispatchTriggeredEvent(const FInputActionInstance& ActionInstance);

    /**
     * Dispatches an action to a registered Input Handler for the Ongoing Event.
     *
     * We need to differentiate the event in the function level, as just relying on the Action
     * Instance may lead to incorrect triggered, since multiple events can happen in the same frame.
     * 
     * @param ActionInstance
     *      Details about the Action that must be processed.
     */
    UFUNCTION()
    void DispatchOngoingEvent(const FInputActionInstance& ActionInstance);

    /**
     * Dispatches an action to a registered Input Handler for the Ongoing Event.
     *
     * We need to differentiate the event in the function level, as just relying on the Action
     * Instance may lead to incorrect triggered, since multiple events can happen in the same frame.
     * 
     * @param ActionInstance
     *      Details about the Action that must be processed.
     */
    UFUNCTION()
    void DispatchCompletedEvent(const FInputActionInstance& ActionInstance);

    /**
     * Dispatches an action to a registered Input Handler for the Ongoing Event.
     *
     * We need to differentiate the event in the function level, as just relying on the Action
     * Instance may lead to incorrect triggered, since multiple events can happen in the same frame.
     * 
     * @param ActionInstance
     *      Details about the Action that must be processed.
     */
    UFUNCTION()
    void DispatchCancelledEvent(const FInputActionInstance& ActionInstance);
    
    /**
     * Effectively dispatches the event, using the Actual Trigger.
     *
     * @param ActionInstance
     *      Details about the Action that must be processed.
     * @param ActualTrigger
     *      The actual trigger that's being handled. The one contained in the Action Instance can
     *      be misleading as multiple triggers can happen on the same frame.
     */
    void Dispatch(const FInputActionInstance& ActionInstance, ETriggerEvent ActualTrigger);
    
    /**
     * Removes an Input Mapping Context and its bindings.
     *
     * @param InputMappingContext
     *		Context to be removed from the Enhanced Input Subsystem and this manager.
     */
    void RemoveInputMappingContext(const UInputMappingContext* InputMappingContext);

    /**
     * Clears the entire Input Setup assigned to this component.
     */
    virtual void ClearInputSetup();

	/**
	 * Determines and broadcasts the input type.
	 */
	virtual void DetectInputType(const FInputActionInstance& ActionInstance);

	/**
	 * Synchronizes the Controller rotation, based on the current input mode and class settings.
	 */
	virtual void SynchronizeControllerRotationSettings();

	/**
	 * Invoked when the owning Pawn restarts, allowing this component to recreate the bindings.
	 */
	UFUNCTION()
	void OnPawnRestarted(APawn* Pawn);

	/**
	 * Invoked when the pawn's controller changes, allowing this component to clear current bindings.
	 */
	UFUNCTION()
	void OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);	

	/**
	 * Invoked when the pawn has changed from the controller perspective.
	 */
	UFUNCTION()
	void OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn);
	
    /**
     * Provides a vector reference for a given axis.
     * This is necessary for all handlers that requires movement direction such as "Movement".
     */
    UFUNCTION(BlueprintNativeEvent, Category = "Input Manager Component")
    void GetVectorForAxis(const EAxis::Type Axis, FVector& OutReference) const;

	/**
	 * Creates a forward reference that can be used by this component.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Input Manager Component")
	USceneComponent* CreateForwardReference(APawn* Owner) const;

	/**
	 * Rotates the current controller to the mouse location.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Input Manager Component")
	void RotateControllerToMouseCursor(float DeltaTime);
	
private:

	/**
	 * Tracks if the component is bound to a controller.
	 * If not, we can't add setups just yet, and they must be queued.
	 */
	bool bBoundToController;

	/** Global guard condition that allows a system-wide pause/unpause of input processing. */
	bool bShouldProcessInputs;

	/** Current input mode assigned to this component. */
	UPROPERTY(ReplicatedUsing = OnRep_CurrentInputModeTag)
	FGameplayTag CurrentInputModeTag;

	/** Controller currently assigned to our owner. */
	UPROPERTY()
	TObjectPtr<AController> OwnerController;

	/** Forward reference for the current owner. */
	UPROPERTY()
	TObjectPtr<USceneComponent> ForwardReference;

    /** All setups registered to this component, mapped by their Mapping Context.*/
    UPROPERTY()
    TMap<TObjectPtr<UInputMappingContext>, FProcessedInputSetup> ProcessedSetups;

	/** Any setup that is pending and must be added when the component binds to a controller. */
	UPROPERTY()
	TArray<TObjectPtr<const UNinjaInputSetupDataAsset>> PendingHandlerSetups;

	/**
	 * We need to replicate and potentially react to changes.
	 */
	UFUNCTION()
	void OnRep_CurrentInputModeTag();

	/**
	 * Sets the Player Input Mode on the authority.
	 */
	UFUNCTION(Server, Reliable)
	void Server_SetPlayerInputMode(const FGameplayTag& InputModeTag);
	
    /**
     * Allows sending a gameplay event to server when we are a local autonomous proxy.
     */
    UFUNCTION(Server, Reliable)
    void Server_SendGameplayEventToOwner(const FGameplayTag& GameplayEventTag,
        const FInputActionValue& Value, const UInputAction* InputAction) const;
    
    /**
     * Allows sending a gameplay event to client when we are a remote server (!).
     * This is a very unlikely scenario, just added for the sake of being thorough.
     */
    UFUNCTION(Client, Reliable)
    void Client_SendGameplayEventToOwner(const FGameplayTag& GameplayEventTag,
        const FInputActionValue& Value, const UInputAction* InputAction) const;
    
};
