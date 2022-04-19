#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FunctionLibrary_Exercise.generated.h"

UCLASS()
class LOBACHYOV_TESTWORK_API UFunctionLibrary_Exercise : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Utility")
	static void RerunConstruction(AActor* Actor);
	UFUNCTION(BlueprintCallable, Category = "Utility")
	static FVector VectorFormToActor(AActor* ActorFrom, FVector ActorFromOffset, AActor* ActorTo, FVector ActorToOffset, bool Normalize = true);
};
