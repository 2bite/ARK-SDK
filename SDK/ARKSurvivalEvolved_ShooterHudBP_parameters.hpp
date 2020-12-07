#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ShooterHudBP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ShooterHudBP.ShooterHudBP_C.GetAdditionalExplorerNoteDynamicMaterialParams
struct AShooterHudBP_C_GetAdditionalExplorerNoteDynamicMaterialParams_Params
{
	struct FExplorerNoteEntry                          ExplorerNote;                                             // (Parm, OutParm, ReferenceParm)
	TArray<struct FNameScalarPair>                     ScalarMaterialParams;                                     // (Parm, OutParm, ZeroConstructor)
	TArray<struct FNameColorPair>                      ColorMaterialParams;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function ShooterHudBP.ShooterHudBP_C.UserConstructionScript
struct AShooterHudBP_C_UserConstructionScript_Params
{
};

// Function ShooterHudBP.ShooterHudBP_C.ExecuteUbergraph_ShooterHudBP
struct AShooterHudBP_C_ExecuteUbergraph_ShooterHudBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
