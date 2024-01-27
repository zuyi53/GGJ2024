// Copyright (C) Developed by Pask, Published by Dark Tower Interactive SRL 2023. All Rights Reserved.

#pragma once

#include "ACFUnitTypes.h"
#include "ALSSavableInterface.h"
#include "CoreMinimal.h"
#include "Groups/ACFAIWaveMaster.h"

#include "ACFAssaultPoint.generated.h"

/**
 *
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConquerStateChanged, const EConqueredState&, newState);

UCLASS(ClassGroup = (ACF))
class UNITSSYSTEM_API AACFAssaultPoint : public AActor, public IALSSavableInterface {
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Server, Reliable, Category = ACF)
    void SetConqueringState(EConqueredState newState);

    UFUNCTION(BlueprintCallable, Server, Reliable, Category = ACF)
    void StartConquering();
   
    UFUNCTION(BlueprintCallable, Server, Reliable, Category = ACF)
    void CompleteConquering();

    UFUNCTION(BlueprintCallable, Server, Reliable, Category = ACF)
    void InterruptConquering();

    UFUNCTION(BlueprintPure, Category = ACF)
    EConqueredState GetConqueringState() const
    {
        return conqueringState;
    }

    UFUNCTION(BlueprintPure, Category = ACF)
    bool CanStartConquering() const
    {
        return conqueringState == EConqueredState::ENotConquered;
    }

    UPROPERTY(BlueprintAssignable, Category = ACF)
    FOnConquerStateChanged OnConquerStateChanged;

protected:
    virtual void BeginPlay() override;

    UFUNCTION(BlueprintNativeEvent, Category = ACF)
    void OnConquestStarted();
    virtual void OnConquestStarted_Implementation();

    UFUNCTION(BlueprintNativeEvent, Category = ACF)
    void OnConquestCompleted();
    virtual void OnConquestCompleted_Implementation();

    UFUNCTION(BlueprintNativeEvent, Category = ACF)
    void OnConquestInterrupted();
    virtual void OnConquestInterrupted_Implementation();

private:
    UPROPERTY(SaveGame, ReplicatedUsing = OnRep_ConqueringState)
    EConqueredState conqueringState;

    UFUNCTION()
    void OnRep_ConqueringState();

  
};
