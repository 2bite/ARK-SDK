#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Proj_TekWyvern_Projectile_Mine_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.BPPostInitializeComponents
struct AProj_TekWyvern_Projectile_Mine_C_BPPostInitializeComponents_Params
{
};

// Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.UpdateBeam
struct AProj_TekWyvern_Projectile_Mine_C_UpdateBeam_Params
{
	TArray<class AActor*>                              actors;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.ReceiveTick
struct AProj_TekWyvern_Projectile_Mine_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.UserConstructionScript
struct AProj_TekWyvern_Projectile_Mine_C_UserConstructionScript_Params
{
};

// Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.ReceiveBeginPlay
struct AProj_TekWyvern_Projectile_Mine_C_ReceiveBeginPlay_Params
{
};

// Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.ExecuteUbergraph_Proj_TekWyvern_Projectile_Mine
struct AProj_TekWyvern_Projectile_Mine_C_ExecuteUbergraph_Proj_TekWyvern_Projectile_Mine_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
