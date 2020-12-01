#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_KingKaiju_Fireball_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_KingKaiju_Fireball.DinoAttackState_KingKaiju_Fireball_C
// 0x0018 (0x00B8 - 0x00A0)
class UDinoAttackState_KingKaiju_Fireball_C : public UPrimalAIStateBPBase
{
public:
	struct FVector                                     OriginalFireballDir;                                      // 0x00A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetDirectionVector;                                    // 0x00AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_KingKaiju_Fireball.DinoAttackState_KingKaiju_Fireball_C");
		return ptr;
	}


	void BPOnAttackStart(int* AttackIndex);
	void BPOnAttackEnd(int* AttackIndex);
	void StartAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role);
	void ExecuteUbergraph_DinoAttackState_KingKaiju_Fireball(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
