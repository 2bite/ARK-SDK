#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_Forge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_Forge.PrimalInventoryBP_Forge_C
// 0x0000 (0x0590 - 0x0590)
class UPrimalInventoryBP_Forge_C : public UPrimalInventoryBP_BaseFuelBurning_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_Forge.PrimalInventoryBP_Forge_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_Forge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
