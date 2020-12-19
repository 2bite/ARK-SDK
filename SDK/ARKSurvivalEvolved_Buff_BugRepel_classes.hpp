#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BugRepel_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_BugRepel.Buff_BugRepel_C
// 0x0000 (0x0950 - 0x0950)
class ABuff_BugRepel_C : public APrimalBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BugRepel.Buff_BugRepel_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_BugRepel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
