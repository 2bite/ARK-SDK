#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Electrocuted_eelWild_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Electrocuted_eelWild.Buff_Electrocuted_eelWild_C
// 0x000C (0x099C - 0x0990)
class ABuff_Electrocuted_eelWild_C : public ABuff_Electrocuted_C
{
public:
	float                                              maxSpeedCap;                                              // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              speedMultiplier;                                          // 0x0994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMultiplier;                                         // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Electrocuted_eelWild.Buff_Electrocuted_eelWild_C");
		return ptr;
	}


	void BPPreSetupForInstigator(class AActor** ForInstigator);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void BPDeactivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Electrocuted_eelWild(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
