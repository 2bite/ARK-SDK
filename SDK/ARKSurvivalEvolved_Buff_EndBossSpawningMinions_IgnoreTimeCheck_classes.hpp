#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EndBossSpawningMinions_IgnoreTimeCheck_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_EndBossSpawningMinions_IgnoreTimeCheck.Buff_EndBossSpawningMinions_IgnoreTimeCheck_C
// 0x0000 (0x0B44 - 0x0B44)
class ABuff_EndBossSpawningMinions_IgnoreTimeCheck_C : public ABuff_EndBossSpawningMinions_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_EndBossSpawningMinions_IgnoreTimeCheck.Buff_EndBossSpawningMinions_IgnoreTimeCheck_C");
		return ptr;
	}


	void BPDeactivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_EndBossSpawningMinions_IgnoreTimeCheck(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
