#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SubtitlesUI_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SubtitlesUI.SubtitlesUI_C.ProcessDynamicMaterialForDialogueIcon
struct USubtitlesUI_C_ProcessDynamicMaterialForDialogueIcon_Params
{
};

// Function SubtitlesUI.SubtitlesUI_C.OnShowSubtitles
struct USubtitlesUI_C_OnShowSubtitles_Params
{
};

// Function SubtitlesUI.SubtitlesUI_C.GetSubtitles
struct USubtitlesUI_C_GetSubtitles_Params
{
	TArray<class FString>                              Subtitles;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function SubtitlesUI.SubtitlesUI_C.ShowSubtitleAtIndex
struct USubtitlesUI_C_ShowSubtitleAtIndex_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubtitlesUI.SubtitlesUI_C.FadeOutSubtitles
struct USubtitlesUI_C_FadeOutSubtitles_Params
{
};

// Function SubtitlesUI.SubtitlesUI_C.AddedToViewport
struct USubtitlesUI_C_AddedToViewport_Params
{
};

// Function SubtitlesUI.SubtitlesUI_C.ShowNextSubtitle
struct USubtitlesUI_C_ShowNextSubtitle_Params
{
};

// Function SubtitlesUI.SubtitlesUI_C.ResetToStart
struct USubtitlesUI_C_ResetToStart_Params
{
	struct FName                                       SubtitleSet;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubtitlesUI.SubtitlesUI_C.OnHideSubtitles
struct USubtitlesUI_C_OnHideSubtitles_Params
{
};

// Function SubtitlesUI.SubtitlesUI_C.ExecuteUbergraph_SubtitlesUI
struct USubtitlesUI_C_ExecuteUbergraph_SubtitlesUI_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
