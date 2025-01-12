// Copyright Artur Balwar


#include "UI/HUD/AuraHUD.h"

#include "UI/HUD/AuraHUD.h"
#include "Blueprint/UserWidget.h"
#include "UI/Widget/AuraUserWidget.h"
 

void AAuraHUD::BeginPlay()
{
	Super::BeginPlay();
	// Check if the widget class is valid
	if (OverlayWidgetClass)
	{
		// Create the widget
		UUserWidget*  Widget = CreateWidget<UUserWidget>(GetWorld(),OverlayWidgetClass);
		if (Widget)
		{
			// Add the widget to the viewport
			Widget->AddToViewport();
		}
		
	}
}
