#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ThatchCeiling_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_ThatchCeiling.EngramEntry_ThatchCeiling_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_ThatchCeiling_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_ThatchCeiling.EngramEntry_ThatchCeiling_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_ThatchCeiling(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
