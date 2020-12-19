#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_OceanPlatformWood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_OceanPlatformWood.EngramEntry_OceanPlatformWood_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_OceanPlatformWood_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_OceanPlatformWood.EngramEntry_OceanPlatformWood_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_OceanPlatformWood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
