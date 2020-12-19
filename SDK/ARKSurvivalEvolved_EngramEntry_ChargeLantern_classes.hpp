#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ChargeLantern_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_ChargeLantern.EngramEntry_ChargeLantern_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_ChargeLantern_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_ChargeLantern.EngramEntry_ChargeLantern_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_ChargeLantern(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
