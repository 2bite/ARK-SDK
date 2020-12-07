#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_UseHarvestComponent_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UseHarvestComponent_Base.UseHarvestComponent_Base_C
// 0x0000 (0x0240 - 0x0240)
class UUseHarvestComponent_Base_C : public UPrimalHarvestingComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UseHarvestComponent_Base.UseHarvestComponent_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_UseHarvestComponent_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
