#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StonePipeVertical_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_StonePipeVertical.EngramEntry_StonePipeVertical_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_StonePipeVertical_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_StonePipeVertical.EngramEntry_StonePipeVertical_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_StonePipeVertical(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
