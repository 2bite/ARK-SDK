#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_ProtoArkDome_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.ExitBoundarySphere
struct ABP_ProtoArkDome_Base_C_ExitBoundarySphere_Params
{
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.EnterBoundarySphere
struct ABP_ProtoArkDome_Base_C_EnterBoundarySphere_Params
{
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.PrintBoundary
struct ABP_ProtoArkDome_Base_C_PrintBoundary_Params
{
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.UpdateBoundary
struct ABP_ProtoArkDome_Base_C_UpdateBoundary_Params
{
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.BoundaryCheck
struct ABP_ProtoArkDome_Base_C_BoundaryCheck_Params
{
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.EnterInnerBoundary
struct ABP_ProtoArkDome_Base_C_EnterInnerBoundary_Params
{
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.ExitOuterBoundary
struct ABP_ProtoArkDome_Base_C_ExitOuterBoundary_Params
{
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.Exit Inner Boundary
struct ABP_ProtoArkDome_Base_C_Exit_Inner_Boundary_Params
{
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.EnterOuterBoundary
struct ABP_ProtoArkDome_Base_C_EnterOuterBoundary_Params
{
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.TriggerDomeTransition
struct ABP_ProtoArkDome_Base_C_TriggerDomeTransition_Params
{
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.ReceiveBeginPlay
struct ABP_ProtoArkDome_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.IsInCave
struct ABP_ProtoArkDome_Base_C_IsInCave_Params
{
	bool                                               F;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.PlayerTest
struct ABP_ProtoArkDome_Base_C_PlayerTest_Params
{
	class AActor*                                      Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPlayer0;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.RemovePP
struct ABP_ProtoArkDome_Base_C_RemovePP_Params
{
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.addPP
struct ABP_ProtoArkDome_Base_C_addPP_Params
{
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.TextureCheck
struct ABP_ProtoArkDome_Base_C_TextureCheck_Params
{
	int                                                Texture0;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Texture1;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Update;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.ColorFilter
struct ABP_ProtoArkDome_Base_C_ColorFilter_Params
{
	struct FLinearColor                                InputColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilterColor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutputColor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.Update Material
struct ABP_ProtoArkDome_Base_C_Update_Material_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      WeatherBlends;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.UpdateSunDirection
struct ABP_ProtoArkDome_Base_C_UpdateSunDirection_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.UserConstructionScript
struct ABP_ProtoArkDome_Base_C_UserConstructionScript_Params
{
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_147_ActorMatineeUpdated__DelegateSignature
struct ABP_ProtoArkDome_Base_C_BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_147_ActorMatineeUpdated__DelegateSignature_Params
{
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.SetAtmosphericFog
struct ABP_ProtoArkDome_Base_C_SetAtmosphericFog_Params
{
	bool                                               InWasteland;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.ToggleDomeVisibility
struct ABP_ProtoArkDome_Base_C_ToggleDomeVisibility_Params
{
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.BndEvt__BoundarySphere_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_ProtoArkDome_Base_C_BndEvt__BoundarySphere_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.BndEvt__BoundarySphere_K2Node_ComponentBoundEvent_317_ComponentEndOverlapSignature__DelegateSignature
struct ABP_ProtoArkDome_Base_C_BndEvt__BoundarySphere_K2Node_ComponentBoundEvent_317_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.BndEvt__OuterBoundary_K2Node_ComponentBoundEvent_240_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_ProtoArkDome_Base_C_BndEvt__OuterBoundary_K2Node_ComponentBoundEvent_240_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.BndEvt__InnerBoundary_K2Node_ComponentBoundEvent_246_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_ProtoArkDome_Base_C_BndEvt__InnerBoundary_K2Node_ComponentBoundEvent_246_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.BndEvt__OuterBoundary_K2Node_ComponentBoundEvent_253_ComponentEndOverlapSignature__DelegateSignature
struct ABP_ProtoArkDome_Base_C_BndEvt__OuterBoundary_K2Node_ComponentBoundEvent_253_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.BndEvt__InnerBoundary_K2Node_ComponentBoundEvent_261_ComponentEndOverlapSignature__DelegateSignature
struct ABP_ProtoArkDome_Base_C_BndEvt__InnerBoundary_K2Node_ComponentBoundEvent_261_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.BndEvt__Cave_Visibility_K2Node_ComponentBoundEvent_678_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_ProtoArkDome_Base_C_BndEvt__Cave_Visibility_K2Node_ComponentBoundEvent_678_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.BndEvt__Cave_Visibility_K2Node_ComponentBoundEvent_688_ComponentEndOverlapSignature__DelegateSignature
struct ABP_ProtoArkDome_Base_C_BndEvt__Cave_Visibility_K2Node_ComponentBoundEvent_688_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C.ExecuteUbergraph_BP_ProtoArkDome_Base
struct ABP_ProtoArkDome_Base_C_ExecuteUbergraph_BP_ProtoArkDome_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
