#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_RocketAmmo_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_RocketAmmo.EngramEntry_RocketAmmo_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_RocketAmmo_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_RocketAmmo.EngramEntry_RocketAmmo_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_RocketAmmo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
