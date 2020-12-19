#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekClaws_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_TekClaws.EngramEntry_TekClaws_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_TekClaws_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_TekClaws.EngramEntry_TekClaws_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_TekClaws(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
