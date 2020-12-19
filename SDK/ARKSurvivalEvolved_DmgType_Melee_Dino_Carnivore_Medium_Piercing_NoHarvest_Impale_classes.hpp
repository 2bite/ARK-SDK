#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Melee_Dino_Carnivore_Medium_Piercing_NoHarvest_Impale_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Melee_Dino_Carnivore_Medium_Piercing_NoHarvest_Impale.DmgType_Melee_Dino_Carnivore_Medium_Piercing_NoHarvest_Impale_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Melee_Dino_Carnivore_Medium_Piercing_NoHarvest_Impale_C : public UDmgType_Melee_Dino_Carnivore_Medium_Piercing_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Melee_Dino_Carnivore_Medium_Piercing_NoHarvest_Impale.DmgType_Melee_Dino_Carnivore_Medium_Piercing_NoHarvest_Impale_C");
		return ptr;
	}


	class UClass* OverrideBuffToGiveVictimCharacter(class APrimalCharacter** Victim, float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
