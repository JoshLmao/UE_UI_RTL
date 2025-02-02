// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CultureChangerWidget.generated.h"

/**
 * 
 */
UCLASS()
class UE_UI_RTL_API UCultureChangerWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UCultureChangerWidget(const class FObjectInitializer& ObjectInitializer);

protected:
    virtual void NativeOnInitialized() override;
    virtual void NativePreConstruct() override;

private:
    UFUNCTION()
    void OnApplyClicked();

    UPROPERTY(meta = (BindWidget))
    class UComboBoxString* CulturesComboBox;

    UPROPERTY(meta = (BindWidget))
    class UButton* ApplyButton;
};
