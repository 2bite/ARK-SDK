#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgTyp_Herbivore_HarvestStone_Molerat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgTyp_Herbivore_HarvestStone_Molerat.DmgTyp_Herbivore_HarvestStone_Molerat_C
// 0x0000 (0x0131 - 0x0131)
class UDmgTyp_Herbivore_HarvestStone_Molerat_C : public UDmgType_Melee_Dino_Herbivore_Medium_MineStone_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgTyp_Herbivore_HarvestStone_Molerat.DmgTyp_Herbivore_HarvestStone_Molerat_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
