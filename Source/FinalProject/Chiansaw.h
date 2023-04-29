// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "FinalProjectCharacter.h"
#include "Camera/CameraComponent.h"
#include "Chiansaw.generated.h"

/**
 * 
 */
UCLASS()
class FINALPROJECT_API AChiansaw : public AWeapon
{
	GENERATED_BODY()
public:
    AChiansaw();

    virtual void OnStartFire() override;
    virtual void OnStopFire() override;

    UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "GunStats")
    float fireRate;
    
    UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "GunStats")
    float weaponRange;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* hitEffect;
    FTimerHandle timer;
    UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Damage")
    float gunDamage;
    UPROPERTY(BlueprintReadWrite)
    AFinalProjectCharacter* Character;
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    void WeaponTrace();
	
};