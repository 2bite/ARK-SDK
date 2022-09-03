#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Projectile_Ice_Amarga_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DmgType_Projectile_Ice_Amarga.DmgType_Projectile_Ice_Amarga_C.OverrideBuffToGiveVictimCharacter
struct UDmgType_Projectile_Ice_Amarga_C_OverrideBuffToGiveVictimCharacter_Params
{
	class APrimalCharacter**                           Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DmgType_Projectile_Ice_Amarga.DmgType_Projectile_Ice_Amarga_C.GetFreezeBuffAmountPerHit
struct UDmgType_Projectile_Ice_Amarga_C_GetFreezeBuffAmountPerHit_Params
{
	class APrimalCharacter**                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif