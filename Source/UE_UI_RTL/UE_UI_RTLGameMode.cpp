// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_UI_RTLGameMode.h"
#include "UE_UI_RTLCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE_UI_RTLGameMode::AUE_UI_RTLGameMode()
{
    // set default pawn class to our Blueprinted character
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
    if (PlayerPawnBPClass.Class != NULL)
    {
        DefaultPawnClass = PlayerPawnBPClass.Class;
    }
}
