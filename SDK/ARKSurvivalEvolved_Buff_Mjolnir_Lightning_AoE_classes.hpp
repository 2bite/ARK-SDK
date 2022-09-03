#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Mjolnir_Lightning_AoE_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C
// 0x0028 (0x09A8 - 0x0980)
class ABuff_Mjolnir_Lightning_AoE_C : public ABuff_Base_AoE_C
{
public:
	float                                              maxDragWeightToApplyStunBuff;                             // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AoEInitialized;                                           // 0x0984(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0985(0x0003) MISSED OFFSET
	float                                              maxDistanceToApplyBuffForPlayers;                         // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              emitterAngle;                                             // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectRadius;                                             // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0994(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnNewActorAdded;                                          // 0x0998(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C");
		return ptr;
	}


	void STATIC_IsActorInEffectiveRange(class AActor* Actor, bool* IsInRange);
	void InitializeAoE();
	void CanAffectCharacter(class APrimalCharacter* characterToAffect, bool* canStun);
	bool BPExcludeAoEActor(class AActor** ActorToConsider);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Mjolnir_Lightning_AoE(int EntryPoint);
	void OnNewActorAdded__DelegateSignature(class AActor* forActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
