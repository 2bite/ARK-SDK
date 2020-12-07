#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CherufeMagma_OnFire_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_CherufeMagma_OnFire.Buff_CherufeMagma_OnFire_C
// 0x0014 (0x0984 - 0x0970)
class ABuff_CherufeMagma_OnFire_C : public ABuff_FlameThrower_OnFire_C
{
public:
	double                                             LastDamageTime_1;                                         // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHealthPercentDamagePerSecond_1;                        // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDamagePerSecond_1;                                     // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDamagePerSecond_1;                                     // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_CherufeMagma_OnFire.Buff_CherufeMagma_OnFire_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_CherufeMagma_OnFire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
