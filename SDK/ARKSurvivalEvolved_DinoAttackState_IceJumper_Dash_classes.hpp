#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_IceJumper_Dash_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C
// 0x0018 (0x00B8 - 0x00A0)
class UDinoAttackState_IceJumper_Dash_C : public UPrimalAIStateBPBase
{
public:
	bool                                               InDashPreventionVolume;                                   // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x00A8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C");
		return ptr;
	}


	bool OnCanUseStateEvent();
	bool BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void OnEndEvent();
	void OnTickEvent(float* DeltaSeconds);
	void OnBeginEvent(class UPrimalAIState** InParentState);
	void IsAIControlled(bool* NewParam);
	void ExecuteUbergraph_DinoAttackState_IceJumper_Dash(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
