#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Melee_Dino_GasBagsMelee_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DmgType_Melee_Dino_GasBagsMelee.DmgType_Melee_Dino_GasBagsMelee_C.BPAdjustAggro
struct UDmgType_Melee_Dino_GasBagsMelee_C_BPAdjustAggro_Params
{
	class APrimalDinoAIController**                    DamagedCharacterController;                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter**                           DamagedCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DesiredAggroValue;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
