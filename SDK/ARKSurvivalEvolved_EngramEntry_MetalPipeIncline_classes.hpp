#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalPipeIncline_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_MetalPipeIncline.EngramEntry_MetalPipeIncline_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_MetalPipeIncline_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_MetalPipeIncline.EngramEntry_MetalPipeIncline_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_MetalPipeIncline(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
