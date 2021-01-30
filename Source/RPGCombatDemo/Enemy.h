// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.generated.h"

UCLASS()
///
/// Holds functions that affect the enemy and inherits from the Actor class.
///
class RPGCOMBATDEMO_API AEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemy();

	UFUNCTION(BlueprintCallable)
	///
	/// Takes in a damage value and subtracts the enemy's health by that amount.
	///
	void DamageEnemy(float damage);

	UFUNCTION(BlueprintCallable)
	///
	/// Returns the enemy's full health value.
	///
	float getEnemyFullHealth() { return m_fullHealth; }
	UFUNCTION(BlueprintCallable)
	///
	/// Sets the enemy's full health value.
	///
	void setEnemyFullHealth(float fullHealth) { fullHealth = m_fullHealth; }

	UFUNCTION(BlueprintCallable)
	///
	/// Gets the enemy's current health value.
	///
	float getEnemyCurrentHealth() { return m_currentHealth; }
	UFUNCTION(BlueprintCallable)
	///
	/// Sets the enemy's current health value.
	///
	void setEnemyCurrentHealth(float currentHealth) { currentHealth = m_currentHealth; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	///
	/// Holds the enemy's full health value.
	///
	float m_fullHealth;
	///
	/// Holds the enemy's current health value.
	///
	float m_currentHealth;
};
