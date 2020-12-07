#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalRamp_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_MetalRamp.EngramEntry_MetalRamp_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_MetalRamp_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_MetalRamp.EngramEntry_MetalRamp_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_MetalRamp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
