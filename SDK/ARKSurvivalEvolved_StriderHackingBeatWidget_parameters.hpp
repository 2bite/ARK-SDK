#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StriderHackingBeatWidget_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.Notify Minigame Ready
struct UStriderHackingBeatWidget_C_Notify_Minigame_Ready_Params
{
};

// Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.UpdateGlyphTextures
struct UStriderHackingBeatWidget_C_UpdateGlyphTextures_Params
{
	class UTexture2D*                                  Glyph0_Top;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Glyph1_TopMiddle;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Glyph2_Middle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Glyph3_MiddleBottom;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Glyph4_Bottom;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.Tick
struct UStriderHackingBeatWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.Construct
struct UStriderHackingBeatWidget_C_Construct_Params
{
};

// Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.ExecuteUbergraph_StriderHackingBeatWidget
struct UStriderHackingBeatWidget_C_ExecuteUbergraph_StriderHackingBeatWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
