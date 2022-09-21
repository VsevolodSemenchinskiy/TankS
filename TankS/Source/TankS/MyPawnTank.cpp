#include "MyPawnTank.h"
#include "Components/BoxComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

AMyPawnTank::AMyPawnTank()
{
 	
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	RootComponent = BoxCollision;
	BodyMash = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	BodyMash->SetupAttachment(BoxCollision);
	TurretMash = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretMesh"));
	TurretMash->SetupAttachment(BodyMash);
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(BoxCollision);
	SpringArm->bDoCollisionTest = false;
	SpringArm->bInheritPitch = false;
	SpringArm->bInheritRoll = false;
	SpringArm->bInheritYaw = false;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
}


void AMyPawnTank::BeginPlay()
{
	Super::BeginPlay();
	
}


void AMyPawnTank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector currentLocation = GetActorLocation();
	FVector ForwardVector = GetActorForwardVector();
	FVector movePosition = currentLocation + ForwardVector * MovementSpeed * ForwardMoweAxisValue * DeltaTime;
	SetActorLocation(movePosition);
}

void AMyPawnTank::MoveForward(float Value)
{
	ForwardMoweAxisValue = Value;
}