#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_Spindles_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_Spindles_Base.DinoAttackState_Spindles_Base_C
// 0x0010 (0x00B0 - 0x00A0)
class UDinoAttackState_Spindles_Base_C : public UPrimalAIStateBPBase
{
public:
	int                                                MinigunAttackIndex;                                       // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AOEAttackIndex;                                           // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinigunActivateAtackIndex;                                // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinigunDeactivateAttackIndex;                             // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_Spindles_Base.DinoAttackState_Spindles_Base_C");
		return ptr;
	}


	void GetDamageClass(class UClass** DamageClass);
	void IsMinigunMode(bool* NewParam);
	void IsAIControlled(bool* Result);
	void ExecuteUbergraph_DinoAttackState_Spindles_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
