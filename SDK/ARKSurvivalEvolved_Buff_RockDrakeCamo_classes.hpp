#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RockDrakeCamo_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_RockDrakeCamo.Buff_RockDrakeCamo_C
// 0x0000 (0x0950 - 0x0950)
class ABuff_RockDrakeCamo_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RockDrakeCamo.Buff_RockDrakeCamo_C");
		return ptr;
	}


	void BuffTickClient(float* DeltaTime);
	void BuffTickServer(float* DeltaTime);
	bool PreventActorTargeting(class AActor** ByActor);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_RockDrakeCamo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
