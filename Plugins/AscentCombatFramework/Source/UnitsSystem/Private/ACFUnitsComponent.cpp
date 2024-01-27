// Copyright (C) Developed by Pask, Published by Dark Tower Interactive SRL 2023. All Rights Reserved.

#include "ACFUnitsComponent.h"
#include "Actors/ACFCharacter.h"
#include "Components/ACFGroupAIComponent.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
UACFUnitsComponent::UACFUnitsComponent()
{
    // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
    // off to improve performance if you don't need them.
    PrimaryComponentTick.bCanEverTick = false;

    // ...
}

// Called when the game starts
void UACFUnitsComponent::BeginPlay()
{
    Super::BeginPlay();

    // ...
}

void UACFUnitsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(UACFUnitsComponent, Units);

}

void UACFUnitsComponent::AddUnit(const TSubclassOf<AACFCharacter>& unit)
{
    if (Units.Contains(unit)) {
        Units.FindByKey(unit)->TotalNumber++;
    } else {
        Units.Add(FBaseUnit(unit));
    }
    OnUnitsChanged.Broadcast(Units);
}

bool UACFUnitsComponent::RemoveUnit(const TSubclassOf<AACFCharacter>& unit)
{
    if (Units.Contains(unit)) {
        const int32 aiNum = Units.FindByKey(unit)->TotalNumber--;
        if (aiNum == 0) {
            Units.Remove(unit);
        }
        OnUnitsChanged.Broadcast(Units);
        return true;
    }
    return false;
}

bool UACFUnitsComponent::MoveUnitToGroup(const TSubclassOf<AACFCharacter>& unit, UACFGroupAIComponent* groupAI)
{
    if (groupAI && RemoveUnit(unit)) {
        groupAI->AddAIToSpawn(unit);
        return true;
    }
    return false;
}

bool UACFUnitsComponent::MoveUnitFromGroup(const TSubclassOf<AACFCharacter>& unit, UACFGroupAIComponent* groupAI)
{
    if (groupAI && groupAI->RemoveAIToSpawn(unit)) {
        AddUnit(unit);
        return true;
    }
    return false;
}

void UACFUnitsComponent::OnRepUnits()
{
    OnUnitsChanged.Broadcast(Units); 
}
