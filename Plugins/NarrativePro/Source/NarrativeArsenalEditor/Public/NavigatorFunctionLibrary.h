// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NavigatorFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVEARSENALEDITOR_API UNavigatorFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
#if WITH_EDITOR

	UFUNCTION(BlueprintPure, Category = "Navigator Function Library")
	static class UTexture2DFactoryNew* GetTexture2DFactory();

#endif 

};
