#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Lamprey_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Lamprey.Buff_Lamprey_C.GetNumBatteries
struct ABuff_Lamprey_C_GetNumBatteries_Params
{
	int                                                numBatteries;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.Get Charge Variable Interface
struct ABuff_Lamprey_C_Get_Charge_Variable_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.BPPreventAddingOtherBuff
struct ABuff_Lamprey_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.BuffTickClient
struct ABuff_Lamprey_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.CreateChargeManager
struct ABuff_Lamprey_C_CreateChargeManager_Params
{
};

// Function Buff_Lamprey.Buff_Lamprey_C.BuffTickServer
struct ABuff_Lamprey_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.BPDeactivated
struct ABuff_Lamprey_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.NotifyDamage
struct ABuff_Lamprey_C_NotifyDamage_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     TheDamageCauser;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.BPCustomAllowAddBuff
struct ABuff_Lamprey_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.BPTryMultiUse
struct ABuff_Lamprey_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.BPGetMultiUseEntries
struct ABuff_Lamprey_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_Lamprey.Buff_Lamprey_C.BPSetupForInstigator
struct ABuff_Lamprey_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.UserConstructionScript
struct ABuff_Lamprey_C_UserConstructionScript_Params
{
};

// Function Buff_Lamprey.Buff_Lamprey_C.FadeInTimeline__FinishedFunc
struct ABuff_Lamprey_C_FadeInTimeline__FinishedFunc_Params
{
};

// Function Buff_Lamprey.Buff_Lamprey_C.FadeInTimeline__UpdateFunc
struct ABuff_Lamprey_C_FadeInTimeline__UpdateFunc_Params
{
};

// Function Buff_Lamprey.Buff_Lamprey_C.FadeOutTimeline__FinishedFunc
struct ABuff_Lamprey_C_FadeOutTimeline__FinishedFunc_Params
{
};

// Function Buff_Lamprey.Buff_Lamprey_C.FadeOutTimeline__UpdateFunc
struct ABuff_Lamprey_C_FadeOutTimeline__UpdateFunc_Params
{
};

// Function Buff_Lamprey.Buff_Lamprey_C.DissolveTimeLine__FinishedFunc
struct ABuff_Lamprey_C_DissolveTimeLine__FinishedFunc_Params
{
};

// Function Buff_Lamprey.Buff_Lamprey_C.DissolveTimeLine__UpdateFunc
struct ABuff_Lamprey_C_DissolveTimeLine__UpdateFunc_Params
{
};

// Function Buff_Lamprey.Buff_Lamprey_C.Interface Check for Batteries and Update Multicast
struct ABuff_Lamprey_C_Interface_Check_for_Batteries_and_Update_Multicast_Params
{
};

// Function Buff_Lamprey.Buff_Lamprey_C.Charge Variable Event Boolean MulticastInterface
struct ABuff_Lamprey_C_Charge_Variable_Event_Boolean_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.Charge Variable Event Float Multicast Interface
struct ABuff_Lamprey_C_Charge_Variable_Event_Float_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.Charge Variable Event Double MulticastInterface
struct ABuff_Lamprey_C_Charge_Variable_Event_Double_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.Charge Variable Event Boolean Interface
struct ABuff_Lamprey_C_Charge_Variable_Event_Boolean_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.ChargeVariableEventFloatInterface
struct ABuff_Lamprey_C_ChargeVariableEventFloatInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.ChargeVariableEventDoubleInterface
struct ABuff_Lamprey_C_ChargeVariableEventDoubleInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.ChargeVariableEventIntInterface
struct ABuff_Lamprey_C_ChargeVariableEventIntInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.ChargeVariableEventIntMulticastInterface
struct ABuff_Lamprey_C_ChargeVariableEventIntMulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.FadeInLight
struct ABuff_Lamprey_C_FadeInLight_Params
{
};

// Function Buff_Lamprey.Buff_Lamprey_C.MultiUpdateLight
struct ABuff_Lamprey_C_MultiUpdateLight_Params
{
};

// Function Buff_Lamprey.Buff_Lamprey_C.UpdateLightIntensity
struct ABuff_Lamprey_C_UpdateLightIntensity_Params
{
	float                                              Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.Dissolve
struct ABuff_Lamprey_C_Dissolve_Params
{
};

// Function Buff_Lamprey.Buff_Lamprey_C.MultiDissolve
struct ABuff_Lamprey_C_MultiDissolve_Params
{
};

// Function Buff_Lamprey.Buff_Lamprey_C.ReceiveBeginPlay
struct ABuff_Lamprey_C_ReceiveBeginPlay_Params
{
};

// Function Buff_Lamprey.Buff_Lamprey_C.Set Charge Variable Interface
struct ABuff_Lamprey_C_Set_Charge_Variable_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicast;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               triggerEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicastEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.Charge Variable Event Interface
struct ABuff_Lamprey_C_Charge_Variable_Event_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.Charge Variable Event Trigger Multicast Interface
struct ABuff_Lamprey_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iVariable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.ChargeVariableEvent
struct ABuff_Lamprey_C_ChargeVariableEvent_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.ChargeVariableEvent_Multicast
struct ABuff_Lamprey_C_ChargeVariableEvent_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey.Buff_Lamprey_C.ExecuteUbergraph_Buff_Lamprey
struct ABuff_Lamprey_C_ExecuteUbergraph_Buff_Lamprey_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
