#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MekBackpack_MissilePod_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_MekBackpack_MissilePod.PrimalItemArmor_MekBackpack_MissilePod_C
// 0x0000 (0x099C - 0x099C)
class UPrimalItemArmor_MekBackpack_MissilePod_C : public UPrimalItemArmor_MekBackpack_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_MekBackpack_MissilePod.PrimalItemArmor_MekBackpack_MissilePod_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_MekBackpack_MissilePod(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif