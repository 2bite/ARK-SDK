#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Melee_Dino_Carnivore_Large_Gnash_TamedAttackerOnly_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Melee_Dino_Carnivore_Large_Gnash_TamedAttackerOnly.DmgType_Melee_Dino_Carnivore_Large_Gnash_TamedAttackerOnly_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Melee_Dino_Carnivore_Large_Gnash_TamedAttackerOnly_C : public UDmgType_Melee_Dino_Carnivore_Large_Gnash_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Melee_Dino_Carnivore_Large_Gnash_TamedAttackerOnly.DmgType_Melee_Dino_Carnivore_Large_Gnash_TamedAttackerOnly_C");
		return ptr;
	}


	class UClass* OverrideBuffToGiveVictimCharacter(class APrimalCharacter** Victim, float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
