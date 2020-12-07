#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Radiation_Sickness_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Radiation_Sickness.Buff_Radiation_Sickness_C
// 0x000C (0x095C - 0x0950)
class ABuff_Radiation_Sickness_C : public ABuff_Base_OnlyRelevantToOwner_C
{
public:
	float                                              BuffTimeDecreaseRate;                                     // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InitialMaxStamina;                                        // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialMaxWeight;                                         // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Radiation_Sickness.Buff_Radiation_Sickness_C");
		return ptr;
	}


	void BuffTickClient(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Radiation_Sickness(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
