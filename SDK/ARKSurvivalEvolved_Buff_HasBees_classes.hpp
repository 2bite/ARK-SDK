#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HasBees_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_HasBees.Buff_HasBees_C
// 0x0004 (0x08A4 - 0x08A0)
class ABuff_HasBees_C : public ABuff_Base_C
{
public:
	float                                              DamageToDoOnTick;                                         // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_HasBees.Buff_HasBees_C");
		return ptr;
	}


	void BPActivated(class AActor** ForInstigator);
	void BuffTickServer(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_HasBees(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
