// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBehavior.h"

// Sets default values
APlayerBehavior::APlayerBehavior()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APlayerBehavior::DamagePlayer(float damage)
{
	m_currentHealth = m_currentHealth - damage;
}

// Called when the game starts or when spawned
void APlayerBehavior::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerBehavior::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

