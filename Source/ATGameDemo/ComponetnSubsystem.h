// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ComponetnSubsystem.generated.h"

/**
 * 
 */
class UActorComponent;
UCLASS()
class ATGAMEDEMO_API UComponetnSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	virtual bool ShouldCreateSubsystem(UObject* Outer) const override; 

	/** Implement this for initialization of instances of the system */
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	/** Implement this for deinitialization of instances of the system */
	virtual void Deinitialize() override;

public:
	UPROPERTY(BlueprintReadWrite)
		TArray<UActorComponent*> DilationComponent;
	UFUNCTION(BlueprintCallable)
		void RegisterComponent(UActorComponent* Component);

};
