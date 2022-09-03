#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ReelingGame_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ReelingGame.ReelingGame_C.HandleKeyPress
struct UReelingGame_C_HandleKeyPress_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	bool                                               retReply;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ReelingGame.ReelingGame_C.OnControllerButtonReleased
struct UReelingGame_C_OnControllerButtonReleased_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FControllerEvent*                           ControllerEvent;                                          // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ReelingGame.ReelingGame_C.OnMouseButtonDown
struct UReelingGame_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ReelingGame.ReelingGame_C.CycleToNextKey
struct UReelingGame_C_CycleToNextKey_Params
{
};

// Function ReelingGame.ReelingGame_C.UpdateRemainingTime
struct UReelingGame_C_UpdateRemainingTime_Params
{
};

// Function ReelingGame.ReelingGame_C.OnKeyUp
struct UReelingGame_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyboardEvent*                             InKeyboardEvent;                                          // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ReelingGame.ReelingGame_C.CycleKeys
struct UReelingGame_C_CycleKeys_Params
{
	bool                                               FinishedGame;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ReelingGame.ReelingGame_C.EndGame
struct UReelingGame_C_EndGame_Params
{
	bool                                               succeeded;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReelingGame.ReelingGame_C.Init
struct UReelingGame_C_Init_Params
{
	float                                              KeyDisplayDuration;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FKey>                                GameKeys;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AWeapFishingRod_C*                           rod;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReelingGame.ReelingGame_C.Tick
struct UReelingGame_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReelingGame.ReelingGame_C.ExecuteUbergraph_ReelingGame
struct UReelingGame_C_ExecuteUbergraph_ReelingGame_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
