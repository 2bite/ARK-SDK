#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalStructure_TekBridge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalStructure_TekBridge.PrimalStructure_TekBridge_C
// 0x0188 (0x0F98 - 0x0E10)
class APrimalStructure_TekBridge_C : public AStructureItemContainerBaseBP_C
{
public:
	class UStaticMeshComponent*                        PlatformCollision;                                        // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent_1;                                        // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Platform;                                                 // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Anchor;                                                   // 0x0E28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StartPlatform;                                            // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SnapPointLeft;                                            // 0x0E38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SnapPointRight;                                           // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SnapPointBack;                                            // 0x0E48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Anchor2;                                                  // 0x0E50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        EndPlatform;                                              // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Landing;                                                  // 0x0E60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LandingPosition;                                          // 0x0E68(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               Activated;                                                // 0x0E74(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0E75(0x0003) MISSED OFFSET
	struct FLinearColor                                DisabledWheelColor;                                       // 0x0E78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Activating;                                               // 0x0E88(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DebugPlacement;                                           // 0x0E89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0E8A(0x0006) MISSED OFFSET
	class UMaterialInstanceDynamic*                    PlatformMat;                                              // 0x0E90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxLength;                                                // 0x0E98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAngle;                                                 // 0x0E9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreferredAngle;                                           // 0x0EA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActivationTime;                                           // 0x0EA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastActivation;                                           // 0x0EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Placed;                                                   // 0x0EB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0EB1(0x0007) MISSED OFFSET
	class UMaterialInstance*                           BasePlatformMat;                                          // 0x0EB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0EC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0EC1(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Location;                              // 0x0EC4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x0ED0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetWorldLocation_ReturnValue;                    // 0x0ED8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetWorldLocation_ReturnValue2;                   // 0x0EE4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_FindLookAtRotation_ReturnValue;                  // 0x0EF0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0EFC(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue2;             // 0x0F00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_BoxTraceSingle_ActorsToIgnore_RefProperty;       // 0x0F08(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_BoxTraceSingle_ActorsToIgnore2_RefProperty;      // 0x0F18(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_BoxTraceSingle_ActorsToIgnore3_RefProperty;      // 0x0F28(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_BoxTraceSingle_ActorsToIgnore4_RefProperty;      // 0x0F38(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_BoxTraceSingleForObjects_ActorsToIgnore_RefProperty;// 0x0F48(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_BoxTraceMultiForObjects_ActorsToIgnore_RefProperty;// 0x0F58(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_BoxTraceMultiForObjects_ActorsToIgnore2_RefProperty;// 0x0F68(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_BoxTraceSingle_ActorsToIgnore5_RefProperty;      // 0x0F78(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x0F88(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalStructure_TekBridge.PrimalStructure_TekBridge_C");
		return ptr;
	}


	void Assign_Platform_Materials();
	void BPRefreshedStructureColors();
	void SetupSnaps();
	void BPPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent);
	struct FVector BPOverrideTargetLocation(struct FVector* attackPos);
	struct FRotator CalculatePlacementRotation(class AController* PC, struct FPlacementData* PlacementData);
	struct FRotator STATIC_BPOverridePlacementRotation(struct FVector* ViewPos, struct FRotator* ViewRot);
	int STATIC_BPIsAllowedToBuildEx(int* CurrentAllowedReason, class APlayerController** PC, bool* bFinalPlacement, bool* bChoosingRotation, struct FPlacementData* OutPlacementData);
	void TestForEnemyStructures(const struct FVector& Location, class APlayerController* Placer, bool* TooClose);
	bool BPPreventUsingAsFloorForStructure(class APrimalStructure** StructureToPlaceOnMe, struct FPlacementData* theOutPlacementData);
	bool BPConsumeUsePinCode(class AActor** FromKeypadActor, class APlayerController** ForPC, int* appledPinCode, bool* bIsActivating);
	bool BPCanBeActivated();
	void BPContainerDeactivated();
	void BPContainerActivated();
	void STATIC_DeactivationComplete();
	void ClientMaterialUpdate();
	void ClientCompleteActivation();
	void ReceiveBeginPlay();
	void UpdateVisibility();
	struct FVector BPOverrideUILocation(class APlayerController** ForPC);
	bool BPOverrideSnappedFromTransform(class APrimalStructure** ParentStructure, int* ParentSnapFromIndex, struct FName* ParentSnapFromName, struct FVector* UnsnappedPlacementPos, struct FRotator* UnsnappedPlacementRot, struct FVector* SnappedPlacementPos, struct FRotator* SnappedPlacementRot, int* SnapToIndex, struct FName* SnapToName, struct FVector* OutLocation, struct FRotator* OutRotation, int* bForceInvalidateSnap);
	void PushBlockers(class APrimalCharacter* BlockingCharacter, const struct FVector& StartPos);
	void OnRep_Activating();
	void TryActivate(bool ActivateBridge);
	void Activate(bool ActivateBridge);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void STATIC_IsBlocked(const struct FVector& Start, const struct FRotator& Rotation, const struct FVector& End, bool CheckLanding, bool* bLocked);
	void OnRep_Activated();
	void OnRep_LandingPosition();
	void PreviewLanding();
	void TestExtension(const struct FVector& Start, const struct FRotator& Rotation, int Extension, class APrimalStructure* SnapTarget, bool ChoosingRotation, bool* Good, struct FVector* Placement);
	void BPPlacedStructure(class APlayerController** ForPC);
	void BPBeginPreview();
	void STATIC_ExtendBridge(const struct FVector& Location);
	void UserConstructionScript();
	void ActivationTick();
	void PushImpact(const struct FVector& Location);
	void ActivationFailed();
	void ClientIsPlaced();
	void MaterialUpdate();
	void ExecuteUbergraph_PrimalStructure_TekBridge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
