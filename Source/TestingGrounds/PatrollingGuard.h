// Copyright Doctor Fail 2019

#pragma once

#include "CoreMinimal.h"
#include "TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "PatrollingGuard.generated.h"

/**
 * 
 */
UCLASS()
class TESTINGGROUNDS_API APatrollingGuard : public ATP_ThirdPersonCharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "AActorArray")
	TArray<AActor*> PatrolRoute;
	TArray<AActor*> GetPatrolRoute();
};
