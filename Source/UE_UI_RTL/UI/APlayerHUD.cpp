// Fill out your copyright notice in the Description page of Project Settings.

#include "APlayerHUD.h"

#include "Blueprint/UserWidget.h"

void AAPlayerHUD::BeginPlay()
{
    Super::BeginPlay();

    const auto RootWidgetInst = CreateWidget(GetOwningPlayerController(), RootWidget);
    RootWidgetInst->AddToViewport();

    FInputModeUIOnly UIOnly;
    UIOnly.SetWidgetToFocus(RootWidgetInst->TakeWidget());
    GetOwningPlayerController()->SetInputMode(UIOnly);
    GetOwningPlayerController()->bShowMouseCursor = true;
}