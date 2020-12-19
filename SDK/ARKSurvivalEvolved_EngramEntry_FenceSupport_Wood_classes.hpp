#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_FenceSupport_Wood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_FenceSupport_Wood.EngramEntry_FenceSupport_Wood_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_FenceSupport_Wood_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_FenceSupport_Wood.EngramEntry_FenceSupport_Wood_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_FenceSupport_Wood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
