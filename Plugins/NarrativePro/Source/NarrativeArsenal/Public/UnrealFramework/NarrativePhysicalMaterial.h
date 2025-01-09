// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "NarrativePhysicalMaterial.generated.h"

/**
 * Custom physical material for Narrative Pro. 
 */
UCLASS()
class NARRATIVEARSENAL_API UNarrativePhysicalMaterial : public UPhysicalMaterial
{
	GENERATED_BODY()
	
public:

	UNarrativePhysicalMaterial();

	//Special damage multiplier we'll apply if the damage calculation sees we've hit this material. 
	UPROPERTY(EditDefaultsOnly, Category = "Narrative Physical Material")
	float DamageMultiplier; 

};
