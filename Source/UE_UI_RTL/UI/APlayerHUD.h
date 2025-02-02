// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "APlayerHUD.generated.h"

/**
 * 
 */
UCLASS()
class UE_UI_RTL_API AAPlayerHUD : public AHUD
{
    GENERATED_BODY()

protected:
    virtual void BeginPlay() override;

private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<class UUserWidget> RootWidget;
};
