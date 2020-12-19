#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_Sky_Sphere_ARK_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.SetMaterials
struct ABP_Sky_Sphere_ARK_C_SetMaterials_Params
{
	class UMaterialInterface*                          NewMaterial;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.ReceiveBeginPlay
struct ABP_Sky_Sphere_ARK_C_ReceiveBeginPlay_Params
{
};

// Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.ColorFilter
struct ABP_Sky_Sphere_ARK_C_ColorFilter_Params
{
	struct FLinearColor                                InputColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilterColor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutputColor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.Update Material
struct ABP_Sky_Sphere_ARK_C_Update_Material_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      WeatherBlends;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.UpdateSunDirection
struct ABP_Sky_Sphere_ARK_C_UpdateSunDirection_Params
{
};

// Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.UserConstructionScript
struct ABP_Sky_Sphere_ARK_C_UserConstructionScript_Params
{
};

// Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_147_ActorMatineeUpdated__DelegateSignature
struct ABP_Sky_Sphere_ARK_C_BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_147_ActorMatineeUpdated__DelegateSignature_Params
{
};

// Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.ExecuteUbergraph_BP_Sky_Sphere_ARK
struct ABP_Sky_Sphere_ARK_C_ExecuteUbergraph_BP_Sky_Sphere_ARK_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
