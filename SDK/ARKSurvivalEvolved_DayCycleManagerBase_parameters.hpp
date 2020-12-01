#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DayCycleManagerBase_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DayCycleManagerBase.DayCycleManagerBase_C.Get Teleport Transfer World PP
struct ADayCycleManagerBase_C_Get_Teleport_Transfer_World_PP_Params
{
	class APostProcessVolume*                          PP;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManagerBase.DayCycleManagerBase_C.Get VR World PP
struct ADayCycleManagerBase_C_Get_VR_World_PP_Params
{
	class APostProcessVolume*                          PP;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManagerBase.DayCycleManagerBase_C.HandleGrappleHookImpacted
struct ADayCycleManagerBase_C_HandleGrappleHookImpacted_Params
{
	class APrimalProjectileGrapplingHook*              GrapHookProj;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
};

// Function DayCycleManagerBase.DayCycleManagerBase_C.GetWeatherEventWarning
struct ADayCycleManagerBase_C_GetWeatherEventWarning_Params
{
	int                                                WeatherEventWarningType;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManagerBase.DayCycleManagerBase_C.Get Golem MeshClass
struct ADayCycleManagerBase_C_Get_Golem_MeshClass_Params
{
	class UClass*                                      isScorchedEarthMesh;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManagerBase.DayCycleManagerBase_C.GetBaseTemperatureModified
struct ADayCycleManagerBase_C_GetBaseTemperatureModified_Params
{
	float                                              ModifiedBaseTemperature;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManagerBase.DayCycleManagerBase_C.ActivatedStructureUpdated
struct ADayCycleManagerBase_C_ActivatedStructureUpdated_Params
{
	class APrimalStructureItemContainer*               ActiveStructure;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManagerBase.DayCycleManagerBase_C.UserConstructionScript
struct ADayCycleManagerBase_C_UserConstructionScript_Params
{
};

// Function DayCycleManagerBase.DayCycleManagerBase_C.ExecuteUbergraph_DayCycleManagerBase
struct ADayCycleManagerBase_C_ExecuteUbergraph_DayCycleManagerBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
