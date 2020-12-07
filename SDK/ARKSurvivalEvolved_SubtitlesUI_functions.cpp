// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SubtitlesUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SubtitlesUI.SubtitlesUI_C.ProcessDynamicMaterialForDialogueIcon
// ()

void USubtitlesUI_C::ProcessDynamicMaterialForDialogueIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitlesUI.SubtitlesUI_C.ProcessDynamicMaterialForDialogueIcon");

	USubtitlesUI_C_ProcessDynamicMaterialForDialogueIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubtitlesUI.SubtitlesUI_C.OnShowSubtitles
// ()

void USubtitlesUI_C::OnShowSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitlesUI.SubtitlesUI_C.OnShowSubtitles");

	USubtitlesUI_C_OnShowSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubtitlesUI.SubtitlesUI_C.GetSubtitles
// ()
// Parameters:
// TArray<class FString>          Subtitles                      (Parm, OutParm, ZeroConstructor)

void USubtitlesUI_C::GetSubtitles(TArray<class FString>* Subtitles)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitlesUI.SubtitlesUI_C.GetSubtitles");

	USubtitlesUI_C_GetSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Subtitles != nullptr)
		*Subtitles = params.Subtitles;
}


// Function SubtitlesUI.SubtitlesUI_C.ShowSubtitleAtIndex
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void USubtitlesUI_C::ShowSubtitleAtIndex(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitlesUI.SubtitlesUI_C.ShowSubtitleAtIndex");

	USubtitlesUI_C_ShowSubtitleAtIndex_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubtitlesUI.SubtitlesUI_C.FadeOutSubtitles
// ()

void USubtitlesUI_C::FadeOutSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitlesUI.SubtitlesUI_C.FadeOutSubtitles");

	USubtitlesUI_C_FadeOutSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubtitlesUI.SubtitlesUI_C.AddedToViewport
// ()

void USubtitlesUI_C::AddedToViewport()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitlesUI.SubtitlesUI_C.AddedToViewport");

	USubtitlesUI_C_AddedToViewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubtitlesUI.SubtitlesUI_C.ShowNextSubtitle
// ()

void USubtitlesUI_C::ShowNextSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitlesUI.SubtitlesUI_C.ShowNextSubtitle");

	USubtitlesUI_C_ShowNextSubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubtitlesUI.SubtitlesUI_C.ResetToStart
// ()
// Parameters:
// struct FName                   SubtitleSet                    (Parm, ZeroConstructor, IsPlainOldData)

void USubtitlesUI_C::ResetToStart(const struct FName& SubtitleSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitlesUI.SubtitlesUI_C.ResetToStart");

	USubtitlesUI_C_ResetToStart_Params params;
	params.SubtitleSet = SubtitleSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubtitlesUI.SubtitlesUI_C.OnHideSubtitles
// ()

void USubtitlesUI_C::OnHideSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitlesUI.SubtitlesUI_C.OnHideSubtitles");

	USubtitlesUI_C_OnHideSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubtitlesUI.SubtitlesUI_C.ExecuteUbergraph_SubtitlesUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USubtitlesUI_C::ExecuteUbergraph_SubtitlesUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitlesUI.SubtitlesUI_C.ExecuteUbergraph_SubtitlesUI");

	USubtitlesUI_C_ExecuteUbergraph_SubtitlesUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
