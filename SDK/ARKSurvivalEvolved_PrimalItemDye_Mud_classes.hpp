#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemDye_Mud_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemDye_Mud.PrimalItemDye_Mud_C
// 0x0000 (0x0A08 - 0x0A08)
class UPrimalItemDye_Mud_C : public UPrimalItemDyeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemDye_Mud.PrimalItemDye_Mud_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemDye_Mud(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
