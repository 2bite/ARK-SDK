#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_TekSkiff_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_TekSkiff.DinoEntry_TekSkiff_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_TekSkiff_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_TekSkiff.DinoEntry_TekSkiff_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_TekSkiff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
