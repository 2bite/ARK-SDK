#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_CruiseMissile_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_CruiseMissile.EngramEntry_CruiseMissile_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_CruiseMissile_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_CruiseMissile.EngramEntry_CruiseMissile_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_CruiseMissile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
