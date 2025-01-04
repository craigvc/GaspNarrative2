// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatRangedInterface.generated.h"

class UMeshComponent;

UINTERFACE(MinimalAPI)
class UCombatRangedInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines basic methods for a source of ranged damage.
 */
class NINJACOMBAT_API ICombatRangedInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides the main mesh component that represents the source mesh.
	 *
	 * @param SocketName		Name of the socket, from which the projectile will be launched.
	 * @return					Mesh Component to be used as source for the projectile.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Ranged Interface")
	UMeshComponent* GetProjectileSourceMesh(FName SocketName = NAME_None) const;
	virtual UMeshComponent* GetProjectileSourceMesh_Implementation(FName SocketName = NAME_None) const;
	
};
