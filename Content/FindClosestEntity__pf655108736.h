#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
class AActor;
class UClass;
class UObject;
#include "FindClosestEntity__pf655108736.generated.h"
UCLASS(config=Engine, meta=(ReplaceConverted="/Game/Enemy/FindClosestEntity.FindClosestEntity_C", OverrideNativeName="FindClosestEntity_C"))
class UFindClosestEntity_C__pf655108736 : public UBlueprintFunctionLibrary
{
public:
	GENERATED_BODY()
	UFindClosestEntity_C__pf655108736(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(WorldContext="__WorldContext", Category, OverrideNativeName="FindClosestEntity"))
	static void bpf__FindClosestEntity__pf(UClass* bpp__Class__pf, FVector bpp__TargetLocation__pf, UObject* bpp____WorldContext__pf, /*out*/ float& bpp__NearestDistance__pf, /*out*/ AActor*& bpp__NearestActor__pf);
public:
};
