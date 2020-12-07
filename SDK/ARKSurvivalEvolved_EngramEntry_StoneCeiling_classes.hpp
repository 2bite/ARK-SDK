#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StoneCeiling_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_StoneCeiling.EngramEntry_StoneCeiling_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_StoneCeiling_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_StoneCeiling.EngramEntry_StoneCeiling_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_StoneCeiling(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
