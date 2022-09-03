#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PhoenixAsh_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_PhoenixAsh.Buff_PhoenixAsh_C
// 0x0004 (0x097C - 0x0978)
class ABuff_PhoenixAsh_C : public ABuff_Base_Stew_C
{
public:
	float                                              FoodConsumptionMultiplier;                                // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PhoenixAsh.Buff_PhoenixAsh_C");
		return ptr;
	}


	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	bool PreventActorTargeting(class AActor** ByActor);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_PhoenixAsh(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
