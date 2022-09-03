#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GlobalUIData_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_FuelOrAmmo_ExtraBar
struct UGlobalUIData_BP_C_BPGetHUDElements_Module_FuelOrAmmo_ExtraBar_Params
{
	int                                                SlotOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SlotSpan;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ExtendedInfoText;                                         // (Parm, ZeroConstructor)
	struct FHUDElement                                 OutHUDElement;                                            // (Parm, OutParm)
};

// Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_FuelOrAmmo
struct UGlobalUIData_BP_C_BPGetHUDElements_Module_FuelOrAmmo_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MainText;                                                 // (Parm, ZeroConstructor)
	class FString                                      ExtendedInfoText;                                         // (Parm, ZeroConstructor)
	class UTexture2D*                                  Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHUDElement                                 OutHUDElement;                                            // (Parm, OutParm)
};

// Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_Struggle
struct UGlobalUIData_BP_C_BPGetHUDElements_Module_Struggle_Params
{
	class APlayerController*                           ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StruggleProgressPercent;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      RichTextOverride;                                         // (Parm, ZeroConstructor)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         Elements;                                                 // (Parm, OutParm, ZeroConstructor)
	struct FHUDRichTextOverlayData                     OutHUDRichTextOverlay;                                    // (Parm, OutParm)
};

// Function GlobalUIData_BP.GlobalUIData_BP_C.ExecuteUbergraph_GlobalUIData_BP
struct UGlobalUIData_BP_C_ExecuteUbergraph_GlobalUIData_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
