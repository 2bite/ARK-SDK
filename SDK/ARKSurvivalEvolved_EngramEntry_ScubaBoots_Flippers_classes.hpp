#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ScubaBoots_Flippers_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_ScubaBoots_Flippers.EngramEntry_ScubaBoots_Flippers_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_ScubaBoots_Flippers_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_ScubaBoots_Flippers.EngramEntry_ScubaBoots_Flippers_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_ScubaBoots_Flippers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
