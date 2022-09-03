#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BaseHumanAnimBP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GliderSuit_CalcBlendspaceAxes
struct UBaseHumanAnimBP_C_GliderSuit_CalcBlendspaceAxes_Params
{
	class AShooterCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateGliderSuitVars
struct UBaseHumanAnimBP_C_UpdateGliderSuitVars_Params
{
	class AShooterCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GliderSuit_CalcAimOffsets
struct UBaseHumanAnimBP_C_GliderSuit_CalcAimOffsets_Params
{
	class AShooterCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.MapVelocityToBlendSpace
struct UBaseHumanAnimBP_C_MapVelocityToBlendSpace_Params
{
	class UMovementComponent*                          MovementComponent;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetCharSequenceNew
struct UBaseHumanAnimBP_C_GetCharSequenceNew_Params
{
	class UAnimSequence*                               AnimSeqIn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AnimSeqOut;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetCharMontageNew
struct UBaseHumanAnimBP_C_GetCharMontageNew_Params
{
	class UAnimMontage*                                MontageIn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                MontageOut;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintPlayAnimationEvent
struct UBaseHumanAnimBP_C_BlueprintPlayAnimationEvent_Params
{
	class UAnimMontage**                               AnimationMontage;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              playedAnimLength;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByEnum_6
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByEnum_6_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_318
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_318_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_317
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_317_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_352
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_352_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_RotationOffsetBlendSpace_18
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_RotationOffsetBlendSpace_18_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendSpacePlayer_48
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendSpacePlayer_48_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_84
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_84_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_316
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_316_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_351
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_351_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_315
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_315_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_314
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_314_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_313
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_313_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_349
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_349_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendSpacePlayer_47
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendSpacePlayer_47_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_312
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_312_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendSpacePlayer_46
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendSpacePlayer_46_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_311
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_311_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_310
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_310_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_309
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_309_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_346
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_346_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_345
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_345_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_343
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_343_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_308
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_308_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_307
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_307_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_306
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_306_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_305
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_305_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_82
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_82_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_342
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_342_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_341
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_341_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_304
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_304_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_303
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_303_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_RotationOffsetBlendSpace_17
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_RotationOffsetBlendSpace_17_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_302
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_302_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByInt_12
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByInt_12_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_301
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_301_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_300
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_300_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_299
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_299_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_298
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_298_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_RotationOffsetBlendSpace_16
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_RotationOffsetBlendSpace_16_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_335
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_335_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_297
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_297_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_334
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_334_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_296
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_296_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_295
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_295_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_294
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_294_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_293
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_293_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_332
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_332_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_292
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_292_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_291
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_291_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendSpacePlayer_45
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendSpacePlayer_45_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_290
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_290_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_288
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_288_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendSpacePlayer_43
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendSpacePlayer_43_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendSpacePlayer_42
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendSpacePlayer_42_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_287
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_287_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_286
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_286_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_285
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_285_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_284
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_284_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendSpacePlayer_41
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendSpacePlayer_41_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_283
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_283_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByInt_11
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByInt_11_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_282
struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_282_Params
{
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.Update Bot Animation
struct UBaseHumanAnimBP_C_Update_Bot_Animation_Params
{
	class APawn*                                       PawnOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintUpdateAnimation
struct UBaseHumanAnimBP_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.ExecuteUbergraph_BaseHumanAnimBP
struct UBaseHumanAnimBP_C_ExecuteUbergraph_BaseHumanAnimBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseHumanAnimBP.BaseHumanAnimBP_C.NewEventDispatcher__DelegateSignature
struct UBaseHumanAnimBP_C_NewEventDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
