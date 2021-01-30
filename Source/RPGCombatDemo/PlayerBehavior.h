// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerBehavior.generated.h"

UCLASS()
///
/// Holds functions that affect the player and inherits from the Pawn class.
///
class RPGCOMBATDEMO_API APlayerBehavior : public APawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerBehavior();

	UFUNCTION(BlueprintCallable)
	///
	/// Takes in a damage value and subtracts the player's health by that amount.
	///
	void DamagePlayer(float damage);

	UFUNCTION(BlueprintCallable)
	///
	/// Returns the player's full health value.
	///
	float getPlayerFullHealth() { return m_fullHealth; }
	UFUNCTION(BlueprintCallable)
	///
	/// Sets the player's full health value.
	///
	void setPlayerFullHealth(float fullHealth) { fullHealth = m_fullHealth; }

	UFUNCTION(BlueprintCallable)
	///
	/// Gets the player's current health value.
	///
	float getPlayerCurrentHealth() { return m_currentHealth; }
	UFUNCTION(BlueprintCallable)
	///
	/// Sets the player's current health value.
	///
	void setPlayerCurrentHealth(float currentHealth) { currentHealth = m_currentHealth; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	///
	/// Holds the player's full health value.
	///
	float m_fullHealth;
	///
	/// Holds the player's current health value.
	///
	float m_currentHealth;
};
