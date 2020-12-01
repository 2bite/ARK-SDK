#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_HarvestStick_Component_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EX_HarvestStick_Component.EX_HarvestStick_Component_C
// 0x0000 (0x0240 - 0x0240)
class UEX_HarvestStick_Component_C : public UUseHarvestComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EX_HarvestStick_Component.EX_HarvestStick_Component_C");
		return ptr;
	}


	void ExecuteUbergraph_EX_HarvestStick_Component(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
