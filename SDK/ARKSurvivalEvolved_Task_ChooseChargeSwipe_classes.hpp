#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_ChooseChargeSwipe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Task_ChooseChargeSwipe.Task_ChooseChargeSwipe_C
// 0x00C0 (0x0138 - 0x0078)
class UTask_ChooseChargeSwipe_C : public UBTTask_BlueprintBase
{
public:
	class AKingKaiju_Character_BP_C*                   KingKaijuChar;                                            // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AKingKaiju_AIController_BP_C*                KingKaijuAIC;                                             // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FBlackboardKeySelector                      AttackIndex;                                              // 0x0088(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ChargeTurnDirection;                                      // 0x00B0(0x0028) (Edit, BlueprintVisible)
	bool                                               FoundCharge;                                              // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	TArray<class APrimalCharacter*>                    KaijuTargets;                                             // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FBlackboardKeySelector                      AggroActor;                                               // 0x00F0(0x0028) (Edit, BlueprintVisible)
	TArray<class AActor*>                              CallFunc_SphereTraceSingle_NEW_ActorsToIgnore_RefProperty;// 0x0118(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_SphereTraceSingle_NEW_ActorsToIgnore2_RefProperty;// 0x0128(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_ChooseChargeSwipe.Task_ChooseChargeSwipe_C");
		return ptr;
	}


	void Check_if_Too_Far_from_SpawnLoc(const struct FVector& TestLoc, bool* Toofar);
	void FindRandomDirection(struct FVector* Direction);
	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_ChooseChargeSwipe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
