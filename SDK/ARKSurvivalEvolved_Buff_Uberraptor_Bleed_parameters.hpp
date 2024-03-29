#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Uberraptor_Bleed_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.BPCustomAllowAddBuff
struct ABuff_Uberraptor_Bleed_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.CalculateDoTDamage
struct ABuff_Uberraptor_Bleed_C_CalculateDoTDamage_Params
{
	float                                              TimeSinceLastDoT;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.BuffTickServer
struct ABuff_Uberraptor_Bleed_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.Do Damage Over TimeFn
struct ABuff_Uberraptor_Bleed_C_Do_Damage_Over_TimeFn_Params
{
	double                                             LastDotTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.BPAdjustStatusValueModification
struct ABuff_Uberraptor_Bleed_C_BPAdjustStatusValueModification_Params
{
	class UPrimalCharacterStatusComponent**            ForComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>*          ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAmount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualModification;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.ReceiveBeginPlay
struct ABuff_Uberraptor_Bleed_C_ReceiveBeginPlay_Params
{
};

// Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.ReceiveEndPlay
struct ABuff_Uberraptor_Bleed_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.UserConstructionScript
struct ABuff_Uberraptor_Bleed_C_UserConstructionScript_Params
{
};

// Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.ExecuteUbergraph_Buff_Uberraptor_Bleed
struct ABuff_Uberraptor_Bleed_C_ExecuteUbergraph_Buff_Uberraptor_Bleed_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
