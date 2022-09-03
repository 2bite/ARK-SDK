#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ImpaledByStego_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ImpaledByStego.Buff_ImpaledByStego_C
// 0x0018 (0x0990 - 0x0978)
class ABuff_ImpaledByStego_C : public ABuff_Base_C
{
public:
	float                                              MaxDamagePercentagePerSecond;                             // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x097C(0x0004) MISSED OFFSET
	double                                             LastTimeDealDamage;                                       // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageInterval;                                           // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDamagePercentagePerSecond;                             // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ImpaledByStego.Buff_ImpaledByStego_C");
		return ptr;
	}


	void BuffTickClient(float* DeltaTime);
	void BuffTickServer(float* DeltaTime);
	void BPDeactivated(class AActor** ForInstigator);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ImpaledByStego(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
