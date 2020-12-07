#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SeedHarvestComponent_Ex_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SeedHarvestComponent_Ex_Base.SeedHarvestComponent_Ex_Base_C
// 0x0000 (0x0240 - 0x0240)
class USeedHarvestComponent_Ex_Base_C : public USeedHarvestComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SeedHarvestComponent_Ex_Base.SeedHarvestComponent_Ex_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_SeedHarvestComponent_Ex_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
