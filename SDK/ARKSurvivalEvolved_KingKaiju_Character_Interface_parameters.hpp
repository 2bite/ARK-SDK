#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KingKaiju_Character_Interface_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetVar_DifficultyIndex
struct UKingKaiju_Character_Interface_C_GetVar_DifficultyIndex_Params
{
	int                                                Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetVar_InHordeMode
struct UKingKaiju_Character_Interface_C_GetVar_InHordeMode_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetKingKaijuCharStatusComponent
struct UKingKaiju_Character_Interface_C_GetKingKaijuCharStatusComponent_Params
{
	class UPrimalCharacterStatusComponent*             Component;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.SetVar_PlayersLostHordeMode
struct UKingKaiju_Character_Interface_C_SetVar_PlayersLostHordeMode_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.SetVar_FinishCurrentHordeMode
struct UKingKaiju_Character_Interface_C_SetVar_FinishCurrentHordeMode_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.SetVar_KKArenaManager
struct UKingKaiju_Character_Interface_C_SetVar_KKArenaManager_Params
{
	class AActor*                                      ArenaManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetKaijuEnemyList
struct UKingKaiju_Character_Interface_C_GetKaijuEnemyList_Params
{
	TArray<class APrimalCharacter*>                    EnemyList;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetClosestEnemy
struct UKingKaiju_Character_Interface_C_GetClosestEnemy_Params
{
	class AActor*                                      Enemy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
