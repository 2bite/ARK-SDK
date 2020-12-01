// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DayCycleManagerBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DayCycleManagerBase.DayCycleManagerBase_C.HandleGrappleHookImpacted
// ()
// Parameters:
// class APrimalProjectileGrapplingHook* GrapHookProj                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)

void ADayCycleManagerBase_C::HandleGrappleHookImpacted(class APrimalProjectileGrapplingHook* GrapHookProj, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.HandleGrappleHookImpacted");

	ADayCycleManagerBase_C_HandleGrappleHookImpacted_Params params;
	params.GrapHookProj = GrapHookProj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;
}


// Function DayCycleManagerBase.DayCycleManagerBase_C.GetWeatherEventWarning
// ()
// Parameters:
// int                            WeatherEventWarningType        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADayCycleManagerBase_C::GetWeatherEventWarning(int* WeatherEventWarningType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.GetWeatherEventWarning");

	ADayCycleManagerBase_C_GetWeatherEventWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeatherEventWarningType != nullptr)
		*WeatherEventWarningType = params.WeatherEventWarningType;
}


// Function DayCycleManagerBase.DayCycleManagerBase_C.Get Golem MeshClass
// ()
// Parameters:
// class UClass*                  isScorchedEarthMesh            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADayCycleManagerBase_C::Get_Golem_MeshClass(class UClass** isScorchedEarthMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.Get Golem MeshClass");

	ADayCycleManagerBase_C_Get_Golem_MeshClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isScorchedEarthMesh != nullptr)
		*isScorchedEarthMesh = params.isScorchedEarthMesh;
}


// Function DayCycleManagerBase.DayCycleManagerBase_C.GetBaseTemperatureModified
// ()
// Parameters:
// float                          ModifiedBaseTemperature        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADayCycleManagerBase_C::GetBaseTemperatureModified(float* ModifiedBaseTemperature)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.GetBaseTemperatureModified");

	ADayCycleManagerBase_C_GetBaseTemperatureModified_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifiedBaseTemperature != nullptr)
		*ModifiedBaseTemperature = params.ModifiedBaseTemperature;
}


// Function DayCycleManagerBase.DayCycleManagerBase_C.ActivatedStructureUpdated
// ()
// Parameters:
// class APrimalStructureItemContainer* ActiveStructure                (Parm, ZeroConstructor, IsPlainOldData)

void ADayCycleManagerBase_C::ActivatedStructureUpdated(class APrimalStructureItemContainer* ActiveStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.ActivatedStructureUpdated");

	ADayCycleManagerBase_C_ActivatedStructureUpdated_Params params;
	params.ActiveStructure = ActiveStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManagerBase.DayCycleManagerBase_C.UserConstructionScript
// ()

void ADayCycleManagerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.UserConstructionScript");

	ADayCycleManagerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManagerBase.DayCycleManagerBase_C.ExecuteUbergraph_DayCycleManagerBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADayCycleManagerBase_C::ExecuteUbergraph_DayCycleManagerBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.ExecuteUbergraph_DayCycleManagerBase");

	ADayCycleManagerBase_C_ExecuteUbergraph_DayCycleManagerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
