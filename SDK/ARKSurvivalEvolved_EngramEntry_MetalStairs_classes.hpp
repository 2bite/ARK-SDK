#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalStairs_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_MetalStairs.EngramEntry_MetalStairs_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_MetalStairs_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_MetalStairs.EngramEntry_MetalStairs_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_MetalStairs(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
