#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OceanPlatfom_Wood_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C
// 0x0055 (0x0B75 - 0x0B20)
class AOceanPlatfom_Wood_BP_C : public AOceanPlatform_Base_BP_C
{
public:
	class UBoxComponent*                               BuildArea;                                                // 0x0B20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FoamInner4;                                               // 0x0B28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FoamInner3;                                               // 0x0B30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FoamInner1;                                               // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FoamInner2;                                               // 0x0B40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    OuterFoam4;                                               // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    OuterFoam3;                                               // 0x0B50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    OuterFoam2;                                               // 0x0B58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    OuterFoam1;                                               // 0x0B60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TestOffset;                                               // 0x0B68(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0B74(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C");
		return ptr;
	}


	void BPOnDemolish(class APlayerController** ForPC, class AActor** DamageCauser);
	void BPOnStructurePickup(class APlayerController** PlayerController, class UClass** ItemType, class UPrimalItem** NewlyPickedUpItem, bool* bIsQuickPickup);
	void BPPlacedStructure(class APlayerController** ForPC);
	bool BPOverrideSnappedFromTransform(class APrimalStructure** ParentStructure, int* ParentSnapFromIndex, struct FName* ParentSnapFromName, struct FVector* UnsnappedPlacementPos, struct FRotator* UnsnappedPlacementRot, struct FVector* SnappedPlacementPos, struct FRotator* SnappedPlacementRot, int* SnapToIndex, struct FName* SnapToName, struct FVector* OutLocation, struct FRotator* OutRotation, int* bForceInvalidateSnap);
	bool BPOverrideSnappedToTransform(class APrimalStructure** childStructure, int* ChildSnapFromIndex, struct FName* ChildSnapFromName, struct FVector* UnsnappedPlacementPos, struct FRotator* UnsnappedPlacementRot, struct FVector* SnappedPlacementPos, struct FRotator* SnappedPlacementRot, int* SnapToIndex, struct FName* SnapToName, struct FVector* OutLocation, struct FRotator* OutRotation, int* bForceInvalidateSnap);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_OceanPlatfom_Wood_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
