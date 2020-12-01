#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PortableRope_Ladder_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PortableRope_Ladder.PortableRope_Ladder_C
// 0x0060 (0x0C00 - 0x0BA0)
class APortableRope_Ladder_C : public APrimalStructurePortableLadder
{
public:
	class UBoxComponent*                               BoxCollision;                                             // 0x0BA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x0BA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RetractedCollisionLadderCenter;                           // 0x0BB0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RetractedCollisionLadderScale;                            // 0x0BBC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ExtendedCollisionLadderCenter;                            // 0x0BC8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ExtendedCollisionLadderScale;                             // 0x0BD4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TracePosOffset;                                           // 0x0BE0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0BEC(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x0BF0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PortableRope_Ladder.PortableRope_Ladder_C");
		return ptr;
	}


	bool AllowManualMultiUseActivation(class APlayerController** ForPC);
	void BPAttachedRootComponent();
	void BuildLadder();
	void UpdateBoxCollitionForRetraction();
	void UserConstructionScript();
	void ExecuteUbergraph_PortableRope_Ladder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
