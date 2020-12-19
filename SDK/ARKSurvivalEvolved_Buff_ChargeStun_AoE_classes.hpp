#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeStun_AoE_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C
// 0x0024 (0x097C - 0x0958)
class ABuff_ChargeStun_AoE_C : public ABuff_Base_AoE_C
{
public:
	float                                              maxDragWeightToApplyStunBuff;                             // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x095C(0x0004) MISSED OFFSET
	class ABuff_ChargeManager_C*                       chargeManagerOwner;                                       // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               AoEInitialized;                                           // 0x0968(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0969(0x0007) MISSED OFFSET
	class UClass*                                      immuneToStunBuff;                                         // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxDistanceToApplyBuffForPlayers;                         // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C");
		return ptr;
	}


	void InitializeAoE(class ABuff_ChargeEmitter_C* chargeManagerBuff);
	void Can_Stun_Character(class APrimalCharacter* characterToStun, bool* canStun);
	void Get_WeaponCharge_Buff(class ABuff_ChargeEmitter_C** chargeBuff);
	bool BPExcludeAoEActor(class AActor** ActorToConsider);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ChargeStun_AoE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
