#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_OnFire_Endboss_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_OnFire_Endboss.Buff_OnFire_EndBoss_C
// 0x0000 (0x08A0 - 0x08A0)
class ABuff_OnFire_EndBoss_C : public ABuff_OnFire_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_OnFire_Endboss.Buff_OnFire_EndBoss_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_OnFire_EndBoss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif