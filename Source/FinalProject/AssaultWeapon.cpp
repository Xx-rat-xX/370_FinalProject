// Fill out your copyright notice in the Description page of Project Settings.


#include "AssaultWeapon.h"

AAssaultWeapon::AAssaultWeapon(){
    fireRate = 0.5f;
    weaponRange = 10000.0f;
    gunDamage = 4.0f;
    if(MyPawn){
        Character = Cast<AFinalProjectCharacter>(MyPawn);
    }
    
}


void AAssaultWeapon::OnStartFire(){
    Super::OnStartFire();
    GetWorldTimerManager().SetTimer(timer,this,&AAssaultWeapon::WeaponTrace,fireRate,true,0.0f);
    
}

void AAssaultWeapon::OnStopFire(){
    Super::OnStopFire();
    GetWorldTimerManager().ClearTimer(timer);
}


void AAssaultWeapon::WeaponTrace_Implementation()
{

}


