#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_KingKaijuFireball_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DmgType_KingKaijuFireball.DmgType_KingKaijuFireball_C.StunKaijus
struct UDmgType_KingKaijuFireball_C_StunKaijus_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DmgType_KingKaijuFireball.DmgType_KingKaijuFireball_C.BPAdjustDamage
struct UDmgType_KingKaijuFireball_C_BPAdjustDamage_Params
{
	class AActor**                                     Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
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
