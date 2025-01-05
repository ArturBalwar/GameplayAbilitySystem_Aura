// Copyright Artur Balwar

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AuraPlayerController.generated.h"


/*Forward Declarations*/
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
class IEnemyInterface;
/*Forward Declarations*/
/**
 * 
 */
UCLASS()
class AURA_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AAuraPlayerController();
	virtual void PlayerTick(float DeltaTime) override;
protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;


private:
	/*Input and Movement*/
	UPROPERTY(EditAnywhere, category = "Input")
	TObjectPtr<UInputMappingContext> AuraContext;
	UPROPERTY(EditAnywhere, category = "Input")
	TObjectPtr<UInputAction> MoveAction;
	void Move(const FInputActionValue& InputActionValue);

	/*Highlighting*/
	void CursorTrace();
	TScriptInterface<IEnemyInterface> LastActor;
	TScriptInterface<IEnemyInterface> ThisActor;
};
