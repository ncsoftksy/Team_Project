// Fill out your copyright notice in the Description page of Project Settings.


#include "KOK_PlayerController.h"
#include "Blueprint/UserWidget.h"

AKOK_PlayerController::AKOK_PlayerController() {

}

void AKOK_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (HUDOverlayClass)
	{
		HUDOverlay = CreateWidget<UUserWidget>(this, HUDOverlayClass);

		if (HUDOverlay)
		{
			HUDOverlay->AddToViewport();
			HUDOverlay->SetVisibility(ESlateVisibility::Visible);
		}
	}
}
