#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_WastelandHunger_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_WastelandHunger.Buff_WastelandHunger_C
// 0x0000 (0x08D4 - 0x08D4)
class ABuff_WastelandHunger_C : public ABuff_BiomeApplied_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_WastelandHunger.Buff_WastelandHunger_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_WastelandHunger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
