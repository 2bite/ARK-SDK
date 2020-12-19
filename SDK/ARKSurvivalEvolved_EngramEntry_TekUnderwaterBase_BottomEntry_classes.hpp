#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekUnderwaterBase_BottomEntry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_TekUnderwaterBase_BottomEntry.EngramEntry_TekUnderwaterBase_BottomEntry_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_TekUnderwaterBase_BottomEntry_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_TekUnderwaterBase_BottomEntry.EngramEntry_TekUnderwaterBase_BottomEntry_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_TekUnderwaterBase_BottomEntry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
