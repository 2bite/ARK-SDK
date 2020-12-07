#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PurloviaBury_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_PurloviaBury.Buff_PurloviaBury_C
// 0x0018 (0x0968 - 0x0950)
class ABuff_PurloviaBury_C : public ABuff_Base_Stew_C
{
public:
	float                                              FoodConsumptionMultiplier;                                // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0954(0x0004) MISSED OFFSET
	TArray<class UClass*>                              allowedBuffClasses;                                       // 0x0958(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PurloviaBury.Buff_PurloviaBury_C");
		return ptr;
	}


	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	bool PreventActorTargeting(class AActor** ByActor);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_PurloviaBury(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
