
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawnTank.generated.h"

class UStaticMeshComponent;
UCLASS()
class TANKS_API AMyPawnTank : public APawn
{
	GENERATED_BODY()

public:
	AMyPawnTank();

	virtual void Tick(float DeltaTime) override;

	void MoveForward(float Value);

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		UStaticMeshComponent* BodyMash;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		UStaticMeshComponent* TurretMash;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		class UBoxComponent* BoxCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		class USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		class UCameraComponent* Camera;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Muve")
		float MovementSpeed = 100.0f;
private:
	float ForwardMoweAxisValue = 0.0f;


 
};
