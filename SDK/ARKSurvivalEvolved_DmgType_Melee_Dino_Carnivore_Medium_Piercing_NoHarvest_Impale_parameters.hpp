#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Melee_Dino_Carnivore_Medium_Piercing_NoHarvest_Impale_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DmgType_Melee_Dino_Carnivore_Medium_Piercing_NoHarvest_Impale.DmgType_Melee_Dino_Carnivore_Medium_Piercing_NoHarvest_Impale_C.OverrideBuffToGiveVictimCharacter
struct UDmgType_Melee_Dino_Carnivore_Medium_Piercing_NoHarvest_Impale_C_OverrideBuffToGiveVictimCharacter_Params
{
	class APrimalCharacter**                           Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
