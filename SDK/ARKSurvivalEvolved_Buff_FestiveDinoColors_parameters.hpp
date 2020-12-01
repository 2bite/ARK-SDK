#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FestiveDinoColors_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.AreColorArraysEqual
struct ABuff_FestiveDinoColors_C_AreColorArraysEqual_Params
{
	TArray<struct FLinearColor>                        A;                                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FLinearColor>                        B;                                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Equal;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.BPSetupForInstigator
struct ABuff_FestiveDinoColors_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.BPDinoRefreshColorization
struct ABuff_FestiveDinoColors_C_BPDinoRefreshColorization_Params
{
	TArray<struct FLinearColor>                        DinoColors;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FLinearColor>                        OverrideColors;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.UserConstructionScript
struct ABuff_FestiveDinoColors_C_UserConstructionScript_Params
{
};

// Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.MultiUpdateColors
struct ABuff_FestiveDinoColors_C_MultiUpdateColors_Params
{
	TArray<struct FLinearColor>                        Colors;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ItemQuality;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.UpdateColorsFromItem
struct ABuff_FestiveDinoColors_C_UpdateColorsFromItem_Params
{
	TArray<struct FLinearColor>                        ItemColors;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ItemQuality;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.MultiUpdateAfterLoadSave
struct ABuff_FestiveDinoColors_C_MultiUpdateAfterLoadSave_Params
{
	TArray<struct FLinearColor>                        Colors;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                CandyQuality;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.DelayedPostLoadUpdate
struct ABuff_FestiveDinoColors_C_DelayedPostLoadUpdate_Params
{
};

// Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.ReceiveBeginPlay
struct ABuff_FestiveDinoColors_C_ReceiveBeginPlay_Params
{
};

// Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.ExecuteUbergraph_Buff_FestiveDinoColors
struct ABuff_FestiveDinoColors_C_ExecuteUbergraph_Buff_FestiveDinoColors_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
