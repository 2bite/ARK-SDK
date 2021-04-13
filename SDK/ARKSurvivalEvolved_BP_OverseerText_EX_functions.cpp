// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_OverseerText_EX_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_OverseerText_EX.BP_OverseerText_EX_C.ConstructionProcess
// (NetRequest, Static, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, DLLImport, BlueprintPure, NetValidate)

void ABP_OverseerText_EX_C::STATIC_ConstructionProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.ConstructionProcess");

	ABP_OverseerText_EX_C_ConstructionProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverseerText_EX.BP_OverseerText_EX_C.InitializeGlyphs
// ()
// Parameters:
// TArray<class FString>          FormattedText                  (Parm, OutParm, ZeroConstructor)

void ABP_OverseerText_EX_C::InitializeGlyphs(TArray<class FString>* FormattedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.InitializeGlyphs");

	ABP_OverseerText_EX_C_InitializeGlyphs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FormattedText != nullptr)
		*FormattedText = params.FormattedText;
}


// Function BP_OverseerText_EX.BP_OverseerText_EX_C.SplitEveryOtherLine
// ()
// Parameters:
// class FString                  Line                           (Parm, ZeroConstructor)
// class FString                  StartingText                   (Parm, OutParm, ZeroConstructor)
// class FString                  OffsetText                     (Parm, OutParm, ZeroConstructor)

void ABP_OverseerText_EX_C::SplitEveryOtherLine(const class FString& Line, class FString* StartingText, class FString* OffsetText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.SplitEveryOtherLine");

	ABP_OverseerText_EX_C_SplitEveryOtherLine_Params params;
	params.Line = Line;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartingText != nullptr)
		*StartingText = params.StartingText;
	if (OffsetText != nullptr)
		*OffsetText = params.OffsetText;
}


// Function BP_OverseerText_EX.BP_OverseerText_EX_C.Convert To Base
// ()
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Base                           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  converted                      (Parm, OutParm, ZeroConstructor)

void ABP_OverseerText_EX_C::Convert_To_Base(int Num, int Base, class FString* converted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.Convert To Base");

	ABP_OverseerText_EX_C_Convert_To_Base_Params params;
	params.Num = Num;
	params.Base = Base;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (converted != nullptr)
		*converted = params.converted;
}


// Function BP_OverseerText_EX.BP_OverseerText_EX_C.FormatReadableText
// ()
// Parameters:
// TArray<class FString>          OriginalText                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            MaxCharPerLine                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          FormattedText                  (Parm, OutParm, ZeroConstructor)

void ABP_OverseerText_EX_C::FormatReadableText(int MaxCharPerLine, TArray<class FString>* OriginalText, TArray<class FString>* FormattedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.FormatReadableText");

	ABP_OverseerText_EX_C_FormatReadableText_Params params;
	params.MaxCharPerLine = MaxCharPerLine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OriginalText != nullptr)
		*OriginalText = params.OriginalText;
	if (FormattedText != nullptr)
		*FormattedText = params.FormattedText;
}


// Function BP_OverseerText_EX.BP_OverseerText_EX_C.Setup
// ()
// Parameters:
// TArray<class FString>          OriginalText                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            WordsPerRow                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OverseerText_EX_C::Setup(int WordsPerRow, TArray<class FString>* OriginalText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.Setup");

	ABP_OverseerText_EX_C_Setup_Params params;
	params.WordsPerRow = WordsPerRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OriginalText != nullptr)
		*OriginalText = params.OriginalText;
}


// Function BP_OverseerText_EX.BP_OverseerText_EX_C.RenderOriginalText
// ()
// Parameters:
// TArray<class FString>          Text                           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UTextRenderComponent*    TextRender                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            TranslationLevel               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OverseerText_EX_C::RenderOriginalText(class UTextRenderComponent* TextRender, const struct FLinearColor& Color, int TranslationLevel, TArray<class FString>* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.RenderOriginalText");

	ABP_OverseerText_EX_C_RenderOriginalText_Params params;
	params.TextRender = TextRender;
	params.Color = Color;
	params.TranslationLevel = TranslationLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_OverseerText_EX.BP_OverseerText_EX_C.RenderGlyph
// ()
// Parameters:
// class FString                  GlyphRepresentation            (Parm, ZeroConstructor)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTextRenderComponent*    TextRender                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           offsetLeft                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Offset                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OverseerText_EX_C::RenderGlyph(const class FString& GlyphRepresentation, const struct FLinearColor& Color, class UTextRenderComponent* TextRender, bool offsetLeft, bool Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.RenderGlyph");

	ABP_OverseerText_EX_C_RenderGlyph_Params params;
	params.GlyphRepresentation = GlyphRepresentation;
	params.Color = Color;
	params.TextRender = TextRender;
	params.offsetLeft = offsetLeft;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverseerText_EX.BP_OverseerText_EX_C.Translation
// ()
// Parameters:
// class FString                  Text                           (Parm, ZeroConstructor)
// class FString                  GlyphTranslation               (Parm, OutParm, ZeroConstructor)

void ABP_OverseerText_EX_C::Translation(const class FString& Text, class FString* GlyphTranslation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.Translation");

	ABP_OverseerText_EX_C_Translation_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlyphTranslation != nullptr)
		*GlyphTranslation = params.GlyphTranslation;
}


// Function BP_OverseerText_EX.BP_OverseerText_EX_C.UserConstructionScript
// ()

void ABP_OverseerText_EX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.UserConstructionScript");

	ABP_OverseerText_EX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverseerText_EX.BP_OverseerText_EX_C.DisplayTranslation__FinishedFunc
// ()

void ABP_OverseerText_EX_C::DisplayTranslation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.DisplayTranslation__FinishedFunc");

	ABP_OverseerText_EX_C_DisplayTranslation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverseerText_EX.BP_OverseerText_EX_C.DisplayTranslation__UpdateFunc
// ()

void ABP_OverseerText_EX_C::DisplayTranslation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.DisplayTranslation__UpdateFunc");

	ABP_OverseerText_EX_C_DisplayTranslation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverseerText_EX.BP_OverseerText_EX_C.ReceiveBeginPlay
// ()

void ABP_OverseerText_EX_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.ReceiveBeginPlay");

	ABP_OverseerText_EX_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverseerText_EX.BP_OverseerText_EX_C.BndEvt__MyBounds_K2Node_ComponentBoundEvent_150_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void ABP_OverseerText_EX_C::BndEvt__MyBounds_K2Node_ComponentBoundEvent_150_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.BndEvt__MyBounds_K2Node_ComponentBoundEvent_150_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_OverseerText_EX_C_BndEvt__MyBounds_K2Node_ComponentBoundEvent_150_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepResult != nullptr)
		*SweepResult = params.SweepResult;
}


// Function BP_OverseerText_EX.BP_OverseerText_EX_C.BndEvt__MyBounds_K2Node_ComponentBoundEvent_383_ComponentEndOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OverseerText_EX_C::BndEvt__MyBounds_K2Node_ComponentBoundEvent_383_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.BndEvt__MyBounds_K2Node_ComponentBoundEvent_383_ComponentEndOverlapSignature__DelegateSignature");

	ABP_OverseerText_EX_C_BndEvt__MyBounds_K2Node_ComponentBoundEvent_383_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverseerText_EX.BP_OverseerText_EX_C.CheckHelmet
// ()

void ABP_OverseerText_EX_C::CheckHelmet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.CheckHelmet");

	ABP_OverseerText_EX_C_CheckHelmet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverseerText_EX.BP_OverseerText_EX_C.ExecuteUbergraph_BP_OverseerText_EX
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OverseerText_EX_C::ExecuteUbergraph_BP_OverseerText_EX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.ExecuteUbergraph_BP_OverseerText_EX");

	ABP_OverseerText_EX_C_ExecuteUbergraph_BP_OverseerText_EX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
