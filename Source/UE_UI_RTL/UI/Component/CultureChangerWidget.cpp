// Fill out your copyright notice in the Description page of Project Settings.

#include "CultureChangerWidget.h"

#include "Components/Button.h"
#include "Components/ComboBoxString.h"

UCultureChangerWidget::UCultureChangerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
    // OVERRIDE - DONT CHANGE FLOW FOR THIS WIDGET AS ITS MAIN CULTURE SWITCHER, ALWAYS ON SCREEN
    // Assuming reader/viewer has a LTR preference :P
    SetFlowDirectionPreference(EFlowDirectionPreference::LeftToRight);
}

void UCultureChangerWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    ApplyButton->OnClicked.AddDynamic(this, &ThisClass::OnApplyClicked);
}

void UCultureChangerWidget::NativePreConstruct()
{
    Super::NativePreConstruct();

    CulturesComboBox->AddOption(TEXT("en"));
    CulturesComboBox->SetSelectedOption(TEXT("en"));
    CulturesComboBox->AddOption(TEXT("ar"));
    CulturesComboBox->RefreshOptions();
}

void UCultureChangerWidget::OnApplyClicked()
{
    FInternationalization::Get().SetCurrentCulture(CulturesComboBox->GetSelectedOption());
}