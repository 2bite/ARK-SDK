#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Salt_Sulfur_Stone_HarvestComponent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Salt_Sulfur_Stone_HarvestComponent.Salt_Sulfur_Stone_HarvestComponent_C
// 0x0000 (0x0250 - 0x0250)
class USalt_Sulfur_Stone_HarvestComponent_C : public UUseHarvestComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Salt_Sulfur_Stone_HarvestComponent.Salt_Sulfur_Stone_HarvestComponent_C");
		return ptr;
	}


	void ExecuteUbergraph_Salt_Sulfur_Stone_HarvestComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
