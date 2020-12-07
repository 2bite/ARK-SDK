#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Pinned_Debuff_Corrupt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Pinned_Debuff_Corrupt.Buff_Pinned_Debuff_Corrupt_C
// 0x0000 (0x0950 - 0x0950)
class ABuff_Pinned_Debuff_Corrupt_C : public ABuff_Pinned_Debuff_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Pinned_Debuff_Corrupt.Buff_Pinned_Debuff_Corrupt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Pinned_Debuff_Corrupt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
