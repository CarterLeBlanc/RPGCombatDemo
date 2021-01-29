// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerBehavior.generated.h"

UCLASS()
class RPGCOMBATDEMO_API APlayerBehavior : public APawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerBehavior();

	UFUNCTION(BlueprintCallable)
	void DamagePlayer(float damage);

	UFUNCTION(BlueprintCallable)
	float getPlayerFullHealth() { return m_fullHealth; }
	UFUNCTION(BlueprintCallable)
	void setPlayerFullHealth(float fullHealth) { fullHealth = m_fullHealth; }

	UFUNCTION(BlueprintCallable)
	float getPlayerCurrentHealth() { return m_currentHealth; }
	UFUNCTION(BlueprintCallable)
	void setPlayerCurrentHealth(float currentHealth) { currentHealth = m_currentHealth; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	float m_fullHealth;
	float m_currentHealth;
};
