#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_WyvernFire_OnFire_Ember_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_WyvernFire_OnFire_Ember.Buff_WyvernFire_OnFire_Ember_C
// 0x0000 (0x0970 - 0x0970)
class ABuff_WyvernFire_OnFire_Ember_C : public ABuff_WyvernFire_OnFire_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_WyvernFire_OnFire_Ember.Buff_WyvernFire_OnFire_Ember_C");
		return ptr;
	}


	void CalcDamageMultiplier();
	void BPResetBuffStart();
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_WyvernFire_OnFire_Ember(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
