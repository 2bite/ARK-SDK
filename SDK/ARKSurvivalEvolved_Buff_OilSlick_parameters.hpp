#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_OilSlick_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_OilSlick.Buff_OilSlick_C.ReceiveTick
struct ABuff_OilSlick_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_OilSlick.Buff_OilSlick_C.SpawnOilFire
struct ABuff_OilSlick_C_SpawnOilFire_Params
{
	struct FVector                                     OverrideOriginLocation;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_OilSlick.Buff_OilSlick_C.UserConstructionScript
struct ABuff_OilSlick_C_UserConstructionScript_Params
{
};

// Function Buff_OilSlick.Buff_OilSlick_C.OnTakeAnyDamage_Event
struct ABuff_OilSlick_C_OnTakeAnyDamage_Event_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_OilSlick.Buff_OilSlick_C.ReceiveBeginPlay
struct ABuff_OilSlick_C_ReceiveBeginPlay_Params
{
};

// Function Buff_OilSlick.Buff_OilSlick_C.ExecuteUbergraph_Buff_OilSlick
struct ABuff_OilSlick_C_ExecuteUbergraph_Buff_OilSlick_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
