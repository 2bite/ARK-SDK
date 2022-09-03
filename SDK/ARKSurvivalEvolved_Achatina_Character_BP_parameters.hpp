#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Achatina_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Achatina_Character_BP.Achatina_Character_BP_C.BPDinoARKDownloadedBegin
struct AAchatina_Character_BP_C_BPDinoARKDownloadedBegin_Params
{
};

// Function Achatina_Character_BP.Achatina_Character_BP_C.BPCharacterUnsleeped
struct AAchatina_Character_BP_C_BPCharacterUnsleeped_Params
{
};

// Function Achatina_Character_BP.Achatina_Character_BP_C.BPCharacterSleeped
struct AAchatina_Character_BP_C_BPCharacterSleeped_Params
{
};

// Function Achatina_Character_BP.Achatina_Character_BP_C.BPOnMovementModeChangedNotify
struct AAchatina_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Achatina_Character_BP.Achatina_Character_BP_C.BPTimerNonDedicated
struct AAchatina_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Achatina_Character_BP.Achatina_Character_BP_C.UserConstructionScript
struct AAchatina_Character_BP_C_UserConstructionScript_Params
{
};

// Function Achatina_Character_BP.Achatina_Character_BP_C.ReceiveBeginPlay
struct AAchatina_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Achatina_Character_BP.Achatina_Character_BP_C.OnDied_Event
struct AAchatina_Character_BP_C_OnDied_Event_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Achatina_Character_BP.Achatina_Character_BP_C.ExecuteUbergraph_Achatina_Character_BP
struct AAchatina_Character_BP_C_ExecuteUbergraph_Achatina_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
