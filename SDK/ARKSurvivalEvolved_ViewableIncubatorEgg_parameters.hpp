#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ViewableIncubatorEgg_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.SetDisplay
struct AViewableIncubatorEgg_C_SetDisplay_Params
{
};

// Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.UpdateDisplay
struct AViewableIncubatorEgg_C_UpdateDisplay_Params
{
	bool                                               FromAdd;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItemConsumable_Egg_C*                 EggClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.DrawBasicFloatingHUD
struct AViewableIncubatorEgg_C_DrawBasicFloatingHUD_Params
{
	class AHUD**                                       ForHUD;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.UserConstructionScript
struct AViewableIncubatorEgg_C_UserConstructionScript_Params
{
};

// Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.ReceiveBeginPlay
struct AViewableIncubatorEgg_C_ReceiveBeginPlay_Params
{
};

// Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.ExecuteUbergraph_ViewableIncubatorEgg
struct AViewableIncubatorEgg_C_ExecuteUbergraph_ViewableIncubatorEgg_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
