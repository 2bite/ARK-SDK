#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceKaijuAttackStateIceNeedle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C
// 0x0001 (0x00A1 - 0x00A0)
class UIceKaijuAttackStateIceNeedle_C : public UPrimalAIStateBPBase
{
public:
	bool                                               LaunchedSpear;                                            // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C");
		return ptr;
	}


	void BPOnAttackStart(int* AttackIndex);
	void StartAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role);
	void BPOnAttackTick(float* DeltaTime);
	void TickAnimationStateEvent(float* DeltaTime, struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role);
	void ExecuteUbergraph_IceKaijuAttackStateIceNeedle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
