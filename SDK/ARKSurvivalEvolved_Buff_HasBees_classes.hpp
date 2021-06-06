#pragma once

// ARKSurvivalEvolved (329.9) SDK

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
// 0x0004 (0x0964 - 0x0960)
class ABuff_HasBees_C : public ABuff_Base_C
{
public:
	float                                              DamageToDoOnTick;                                         // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
