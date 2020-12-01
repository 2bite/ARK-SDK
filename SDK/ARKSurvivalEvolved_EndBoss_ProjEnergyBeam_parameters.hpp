#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBoss_ProjEnergyBeam_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.CheckCanHaveBeams
struct AEndBoss_ProjEnergyBeam_C_CheckCanHaveBeams_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.UpdateBeamAim
struct AEndBoss_ProjEnergyBeam_C_UpdateBeamAim_Params
{
};

// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.UserConstructionScript
struct AEndBoss_ProjEnergyBeam_C_UserConstructionScript_Params
{
};

// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.ReceiveBeginPlay
struct AEndBoss_ProjEnergyBeam_C_ReceiveBeginPlay_Params
{
};

// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.ReceiveTick
struct AEndBoss_ProjEnergyBeam_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.DisableBeam
struct AEndBoss_ProjEnergyBeam_C_DisableBeam_Params
{
};

// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.ClearTargets
struct AEndBoss_ProjEnergyBeam_C_ClearTargets_Params
{
};

// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.UpdateProjectileBeam
struct AEndBoss_ProjEnergyBeam_C_UpdateProjectileBeam_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.UpdateVisuals
struct AEndBoss_ProjEnergyBeam_C_UpdateVisuals_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.TraceAndDealDamage
struct AEndBoss_ProjEnergyBeam_C_TraceAndDealDamage_Params
{
	class APrimalDinoCharacter*                        BeamInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.DestroyBeam
struct AEndBoss_ProjEnergyBeam_C_DestroyBeam_Params
{
};

// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.ExecuteUbergraph_EndBoss_ProjEnergyBeam
struct AEndBoss_ProjEnergyBeam_C_ExecuteUbergraph_EndBoss_ProjEnergyBeam_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
