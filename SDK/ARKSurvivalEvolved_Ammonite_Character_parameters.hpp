#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ammonite_Character_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ammonite_Character.Ammonite_Character_C.Apply Rage Buff on Character
struct AAmmonite_Character_C_Apply_Rage_Buff_on_Character_Params
{
	class AActor*                                      OtherCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BuffToApply;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ammonite_Character.Ammonite_Character_C.UserConstructionScript
struct AAmmonite_Character_C_UserConstructionScript_Params
{
};

// Function Ammonite_Character.Ammonite_Character_C.AnimNotify_CallForHelp
struct AAmmonite_Character_C_AnimNotify_CallForHelp_Params
{
	class AActor*                                      NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ammonite_Character.Ammonite_Character_C.ReceiveAnyDamage
struct AAmmonite_Character_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ammonite_Character.Ammonite_Character_C.SpawnLastInk
struct AAmmonite_Character_C_SpawnLastInk_Params
{
};

// Function Ammonite_Character.Ammonite_Character_C.ExecuteUbergraph_Ammonite_Character
struct AAmmonite_Character_C_ExecuteUbergraph_Ammonite_Character_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
