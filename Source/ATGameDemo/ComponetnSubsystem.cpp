// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponetnSubsystem.h"

bool UComponetnSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	Super::ShouldCreateSubsystem(Outer);
	return true;
}

void UComponetnSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UComponetnSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

void UComponetnSubsystem::RegisterComponent(UActorComponent* Component)
{
	DilationComponent.Add(Component);
}
