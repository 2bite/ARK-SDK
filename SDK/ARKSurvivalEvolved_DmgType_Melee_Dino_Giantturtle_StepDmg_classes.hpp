#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Melee_Dino_Giantturtle_StepDmg_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Melee_Dino_Giantturtle_StepDmg.DmgType_Melee_Dino_Giantturtle_StepDmg_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Melee_Dino_Giantturtle_StepDmg_C : public UDmgType_Melee_Dino_Herbivore_Large_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Melee_Dino_Giantturtle_StepDmg.DmgType_Melee_Dino_Giantturtle_StepDmg_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
