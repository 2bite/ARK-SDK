// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StriderHackingBeatWidget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.Notify Minigame Ready
// ()

void UStriderHackingBeatWidget_C::Notify_Minigame_Ready()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.Notify Minigame Ready");

	UStriderHackingBeatWidget_C_Notify_Minigame_Ready_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.UpdateGlyphTextures
// ()
// Parameters:
// class UTexture2D*              Glyph0_Top                     (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Glyph1_TopMiddle               (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Glyph2_Middle                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Glyph3_MiddleBottom            (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Glyph4_Bottom                  (Parm, ZeroConstructor, IsPlainOldData)

void UStriderHackingBeatWidget_C::UpdateGlyphTextures(class UTexture2D* Glyph0_Top, class UTexture2D* Glyph1_TopMiddle, class UTexture2D* Glyph2_Middle, class UTexture2D* Glyph3_MiddleBottom, class UTexture2D* Glyph4_Bottom)
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.UpdateGlyphTextures");

	UStriderHackingBeatWidget_C_UpdateGlyphTextures_Params params;
	params.Glyph0_Top = Glyph0_Top;
	params.Glyph1_TopMiddle = Glyph1_TopMiddle;
	params.Glyph2_Middle = Glyph2_Middle;
	params.Glyph3_MiddleBottom = Glyph3_MiddleBottom;
	params.Glyph4_Bottom = Glyph4_Bottom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.Tick
// ()
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UStriderHackingBeatWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.Tick");

	UStriderHackingBeatWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.Construct
// ()

void UStriderHackingBeatWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.Construct");

	UStriderHackingBeatWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.ExecuteUbergraph_StriderHackingBeatWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStriderHackingBeatWidget_C::ExecuteUbergraph_StriderHackingBeatWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.ExecuteUbergraph_StriderHackingBeatWidget");

	UStriderHackingBeatWidget_C_ExecuteUbergraph_StriderHackingBeatWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
