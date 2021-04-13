#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MekBackpack_SiegeCannon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_MekBackpack_SiegeCannon.PrimalItemArmor_MekBackpack_SiegeCannon_C
// 0x0000 (0x0A0C - 0x0A0C)
class UPrimalItemArmor_MekBackpack_SiegeCannon_C : public UPrimalItemArmor_MekBackpack_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_MekBackpack_SiegeCannon.PrimalItemArmor_MekBackpack_SiegeCannon_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_MekBackpack_SiegeCannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
