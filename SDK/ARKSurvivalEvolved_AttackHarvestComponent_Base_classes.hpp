#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AttackHarvestComponent_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AttackHarvestComponent_Base.AttackHarvestComponent_Base_C
// 0x0000 (0x0250 - 0x0250)
class UAttackHarvestComponent_Base_C : public UPrimalHarvestingComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AttackHarvestComponent_Base.AttackHarvestComponent_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_AttackHarvestComponent_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
