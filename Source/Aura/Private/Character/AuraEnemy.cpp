// Copyright LukeM


#include "Character/AuraEnemy.h"


void AAuraEnemy::HighlightActor()
{
	bHighlight = true;

	/*DrawDebugSphere(GetWorld(),
		GetActorLocation(),
		50.f,
		10.f,
		FColor::Red,
		false,
		0,
		0,
		0
		);*/
}

void AAuraEnemy::UnHighlightActor()
{

	bHighlight = false;
	/*if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, TEXT("UnhighlighActor"));
	}*/
	
}
