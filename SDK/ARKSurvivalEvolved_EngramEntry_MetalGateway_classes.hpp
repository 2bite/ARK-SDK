#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalGateway_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_MetalGateway.EngramEntry_MetalGateway_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_MetalGateway_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_MetalGateway.EngramEntry_MetalGateway_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_MetalGateway(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
