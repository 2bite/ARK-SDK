#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_OverseerText_EX_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_OverseerText_EX.BP_OverseerText_EX_C.ConstructionProcess
struct ABP_OverseerText_EX_C_ConstructionProcess_Params
{
};

// Function BP_OverseerText_EX.BP_OverseerText_EX_C.InitializeGlyphs
struct ABP_OverseerText_EX_C_InitializeGlyphs_Params
{
	TArray<class FString>                              FormattedText;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_OverseerText_EX.BP_OverseerText_EX_C.SplitEveryOtherLine
struct ABP_OverseerText_EX_C_SplitEveryOtherLine_Params
{
	class FString                                      Line;                                                     // (Parm, ZeroConstructor)
	class FString                                      StartingText;                                             // (Parm, OutParm, ZeroConstructor)
	class FString                                      OffsetText;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_OverseerText_EX.BP_OverseerText_EX_C.Convert To Base
struct ABP_OverseerText_EX_C_Convert_To_Base_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Base;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      converted;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_OverseerText_EX.BP_OverseerText_EX_C.FormatReadableText
struct ABP_OverseerText_EX_C_FormatReadableText_Params
{
	TArray<class FString>                              OriginalText;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                MaxCharPerLine;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              FormattedText;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_OverseerText_EX.BP_OverseerText_EX_C.Setup
struct ABP_OverseerText_EX_C_Setup_Params
{
	TArray<class FString>                              OriginalText;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                WordsPerRow;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OverseerText_EX.BP_OverseerText_EX_C.RenderOriginalText
struct ABP_OverseerText_EX_C_RenderOriginalText_Params
{
	TArray<class FString>                              Text;                                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UTextRenderComponent*                        TextRender;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TranslationLevel;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OverseerText_EX.BP_OverseerText_EX_C.RenderGlyph
struct ABP_OverseerText_EX_C_RenderGlyph_Params
{
	class FString                                      GlyphRepresentation;                                      // (Parm, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        TextRender;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               offsetLeft;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OverseerText_EX.BP_OverseerText_EX_C.Translation
struct ABP_OverseerText_EX_C_Translation_Params
{
	class FString                                      Text;                                                     // (Parm, ZeroConstructor)
	class FString                                      GlyphTranslation;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function BP_OverseerText_EX.BP_OverseerText_EX_C.UserConstructionScript
struct ABP_OverseerText_EX_C_UserConstructionScript_Params
{
};

// Function BP_OverseerText_EX.BP_OverseerText_EX_C.DisplayTranslation__FinishedFunc
struct ABP_OverseerText_EX_C_DisplayTranslation__FinishedFunc_Params
{
};

// Function BP_OverseerText_EX.BP_OverseerText_EX_C.DisplayTranslation__UpdateFunc
struct ABP_OverseerText_EX_C_DisplayTranslation__UpdateFunc_Params
{
};

// Function BP_OverseerText_EX.BP_OverseerText_EX_C.ReceiveBeginPlay
struct ABP_OverseerText_EX_C_ReceiveBeginPlay_Params
{
};

// Function BP_OverseerText_EX.BP_OverseerText_EX_C.BndEvt__MyBounds_K2Node_ComponentBoundEvent_150_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_OverseerText_EX_C_BndEvt__MyBounds_K2Node_ComponentBoundEvent_150_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function BP_OverseerText_EX.BP_OverseerText_EX_C.BndEvt__MyBounds_K2Node_ComponentBoundEvent_383_ComponentEndOverlapSignature__DelegateSignature
struct ABP_OverseerText_EX_C_BndEvt__MyBounds_K2Node_ComponentBoundEvent_383_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OverseerText_EX.BP_OverseerText_EX_C.CheckHelmet
struct ABP_OverseerText_EX_C_CheckHelmet_Params
{
};

// Function BP_OverseerText_EX.BP_OverseerText_EX_C.ExecuteUbergraph_BP_OverseerText_EX
struct ABP_OverseerText_EX_C_ExecuteUbergraph_BP_OverseerText_EX_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
