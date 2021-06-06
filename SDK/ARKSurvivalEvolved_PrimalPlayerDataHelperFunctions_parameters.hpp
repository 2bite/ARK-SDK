#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalPlayerDataHelperFunctions_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C.Apply To Player Pawn Character
struct UPrimalPlayerDataHelperFunctions_C_Apply_To_Player_Pawn_Character_Params
{
	class AShooterPlayerState*                         For_Player_State;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           New_Player_Character;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Ascension_Data;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                HexagonCount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ChibiLevelUpsCount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUnlockedAllExplorerNotes;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C.ExecuteUbergraph_PrimalPlayerDataHelperFunctions
struct UPrimalPlayerDataHelperFunctions_C_ExecuteUbergraph_PrimalPlayerDataHelperFunctions_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
