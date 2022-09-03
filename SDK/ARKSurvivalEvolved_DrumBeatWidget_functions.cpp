// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DrumBeatWidget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DrumBeatWidget.DrumBeatWidget_C.Set Widget Content Opacity
// ()
// Parameters:
// float                          NewOpacity                     (Parm, ZeroConstructor, IsPlainOldData)

void UDrumBeatWidget_C::Set_Widget_Content_Opacity(float NewOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrumBeatWidget.DrumBeatWidget_C.Set Widget Content Opacity");

	UDrumBeatWidget_C_Set_Widget_Content_Opacity_Params params;
	params.NewOpacity = NewOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrumBeatWidget.DrumBeatWidget_C.Set Widget Coloration
// ()
// Parameters:
// struct FLinearColor            NewColor                       (Parm, ZeroConstructor, IsPlainOldData)

void UDrumBeatWidget_C::Set_Widget_Coloration(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrumBeatWidget.DrumBeatWidget_C.Set Widget Coloration");

	UDrumBeatWidget_C_Set_Widget_Coloration_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrumBeatWidget.DrumBeatWidget_C.ExecuteUbergraph_DrumBeatWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDrumBeatWidget_C::ExecuteUbergraph_DrumBeatWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrumBeatWidget.DrumBeatWidget_C.ExecuteUbergraph_DrumBeatWidget");

	UDrumBeatWidget_C_ExecuteUbergraph_DrumBeatWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
