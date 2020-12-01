#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExtinctionDayCycle_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ExtinctionDayCycle.ExtinctionDayCycle_C.GetVar_KKArenaAscenscionLoc
struct AExtinctionDayCycle_C_GetVar_KKArenaAscenscionLoc_Params
{
	class AActor*                                      SSPoint;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ExtinctionDayCycle.ExtinctionDayCycle_C.GetVar_DKArenaLoc
struct AExtinctionDayCycle_C_GetVar_DKArenaLoc_Params
{
	class AActor*                                      Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ExtinctionDayCycle.ExtinctionDayCycle_C.GetVar_IsBossElectricalStormActive
struct AExtinctionDayCycle_C_GetVar_IsBossElectricalStormActive_Params
{
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ExtinctionDayCycle.ExtinctionDayCycle_C.GetVar_KKArenaLoc
struct AExtinctionDayCycle_C_GetVar_KKArenaLoc_Params
{
	class AActor*                                      ServerPoint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ExtinctionDayCycle.ExtinctionDayCycle_C.GetVar_FKArenaLoc
struct AExtinctionDayCycle_C_GetVar_FKArenaLoc_Params
{
	class AActor*                                      ServerPoint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ExtinctionDayCycle.ExtinctionDayCycle_C.GetVar_IKArenaLoc
struct AExtinctionDayCycle_C_GetVar_IKArenaLoc_Params
{
	class AActor*                                      ServerPoint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ExtinctionDayCycle.ExtinctionDayCycle_C.Get Golem MeshClass
struct AExtinctionDayCycle_C_Get_Golem_MeshClass_Params
{
	class UClass*                                      isScorchedEarthMesh;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ExtinctionDayCycle.ExtinctionDayCycle_C.AttemptWeaponFiring
struct AExtinctionDayCycle_C_AttemptWeaponFiring_Params
{
	class AShooterWeapon**                             theWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExtinctionDayCycle.ExtinctionDayCycle_C.AllowStructureActivation
struct AExtinctionDayCycle_C_AllowStructureActivation_Params
{
	class APrimalStructure**                           theStructure;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ExtinctionDayCycle.ExtinctionDayCycle_C.AllowWeaponFiring
struct AExtinctionDayCycle_C_AllowWeaponFiring_Params
{
	class AActor**                                     theWeaponOrStructure;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ExtinctionDayCycle.ExtinctionDayCycle_C.IsActorIntoBossElectricalStorm
struct AExtinctionDayCycle_C_IsActorIntoBossElectricalStorm_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               _return;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ExtinctionDayCycle.ExtinctionDayCycle_C.SetSkyMaterial
struct AExtinctionDayCycle_C_SetSkyMaterial_Params
{
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Weather;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function ExtinctionDayCycle.ExtinctionDayCycle_C.Init Materials
struct AExtinctionDayCycle_C_Init_Materials_Params
{
};

// Function ExtinctionDayCycle.ExtinctionDayCycle_C.Bind Master Dome
struct AExtinctionDayCycle_C_Bind_Master_Dome_Params
{
	class ABP_ProtoArkDome_Base_C*                     Dome;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               newMaster;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ExtinctionDayCycle.ExtinctionDayCycle_C.UserConstructionScript
struct AExtinctionDayCycle_C_UserConstructionScript_Params
{
};

// Function ExtinctionDayCycle.ExtinctionDayCycle_C.SetVar_Boss_ElectricalStormActive
struct AExtinctionDayCycle_C_SetVar_Boss_ElectricalStormActive_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExtinctionDayCycle.ExtinctionDayCycle_C.ExecuteUbergraph_ExtinctionDayCycle
struct AExtinctionDayCycle_C_ExecuteUbergraph_ExtinctionDayCycle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
