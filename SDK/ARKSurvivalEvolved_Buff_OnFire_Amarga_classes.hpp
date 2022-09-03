#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_OnFire_Amarga_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_OnFire_Amarga.Buff_OnFire_Amarga_C
// 0x0014 (0x098C - 0x0978)
class ABuff_OnFire_Amarga_C : public ABuff_OnFire_C
{
public:
	double                                             LastDamageTime;                                           // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDamagePerSecond;                                       // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHealthPercentDamagePerSecond;                          // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDamagePerSecond;                                       // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_OnFire_Amarga.Buff_OnFire_Amarga_C");
		return ptr;
	}


	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void ReceiveTick(float* DeltaSeconds);
	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_OnFire_Amarga(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
