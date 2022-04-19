#include "FunctionLibrary_Exercise.h"

void UFunctionLibrary_Exercise::RerunConstruction(AActor* Actor)
{
    Actor->RerunConstructionScripts();
}

FVector UFunctionLibrary_Exercise::VectorFormToActor(AActor* ActorFrom, FVector ActorFromOffset, AActor* ActorTo, FVector ActorToOffset, bool Normalize)
{
    FVector TargetVector, FromVector;

    FromVector = ActorFrom->GetActorLocation() + ActorFromOffset;
    TargetVector = ActorTo->GetActorLocation() + ActorToOffset - FromVector;
    if (Normalize)
        TargetVector = TargetVector.GetSafeNormal(0.001);
    return TargetVector;
}

