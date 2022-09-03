#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BasilReplaceAttackTargetingAndFollowDistance_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_BasilReplaceAttackTargetingAndFollowDistance.Buff_BasilReplaceAttackTargetingAndFollowDistance_C
// 0x0018 (0x0990 - 0x0978)
class ABuff_BasilReplaceAttackTargetingAndFollowDistance_C : public ABuff_Base_C
{
public:
	float                                              ReplacementTargetingRange;                                // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OldAttackDistance;                                        // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReplacementFollowingStopDistance;                         // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OldFollowingStopDistance;                                 // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinFollowStopDistance;                                    // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFollowStopDistance;                                    // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BasilReplaceAttackTargetingAndFollowDistance.Buff_BasilReplaceAttackTargetingAndFollowDistance_C");
		return ptr;
	}


	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_BasilReplaceAttackTargetingAndFollowDistance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
