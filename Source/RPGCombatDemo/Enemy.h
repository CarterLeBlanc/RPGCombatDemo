// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.generated.h"

UCLASS()
class RPGCOMBATDEMO_API AEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemy();

	UFUNCTION(BlueprintCallable)
	void DamageEnemy(float damage);

	UFUNCTION(BlueprintCallable)
	float getEnemyFullHealth() { return m_fullHealth; }
	UFUNCTION(BlueprintCallable)
	void setEnemyFullHealth(float fullHealth) { fullHealth = m_fullHealth; }

	UFUNCTION(BlueprintCallable)
	float getEnemyCurrentHealth() { return m_currentHealth; }
	UFUNCTION(BlueprintCallable)
	void setEnemyCurrentHealth(float currentHealth) { currentHealth = m_currentHealth; }

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
