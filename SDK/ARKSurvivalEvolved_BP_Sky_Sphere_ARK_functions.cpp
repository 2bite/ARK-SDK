// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_Sky_Sphere_ARK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.GetSkyMaterialReference
// ()
// Parameters:
// class UMaterialInstanceDynamic* Mid                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Sky_Sphere_ARK_C::GetSkyMaterialReference(class UMaterialInstanceDynamic** Mid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.GetSkyMaterialReference");

	ABP_Sky_Sphere_ARK_C_GetSkyMaterialReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mid != nullptr)
		*Mid = params.Mid;
}


// Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.ResetMaterials
// ()

void ABP_Sky_Sphere_ARK_C::ResetMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.ResetMaterials");

	ABP_Sky_Sphere_ARK_C_ResetMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.SetMaterials
// ()
// Parameters:
// class UMaterialInterface*      NewMaterial                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Sky_Sphere_ARK_C::SetMaterials(class UMaterialInterface* NewMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.SetMaterials");

	ABP_Sky_Sphere_ARK_C_SetMaterials_Params params;
	params.NewMaterial = NewMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.ReceiveBeginPlay
// ()

void ABP_Sky_Sphere_ARK_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.ReceiveBeginPlay");

	ABP_Sky_Sphere_ARK_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.ColorFilter
// ()
// Parameters:
// struct FLinearColor            InputColor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            FilterColor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            OutputColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Sky_Sphere_ARK_C::ColorFilter(const struct FLinearColor& InputColor, const struct FLinearColor& FilterColor, struct FLinearColor* OutputColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.ColorFilter");

	ABP_Sky_Sphere_ARK_C_ColorFilter_Params params;
	params.InputColor = InputColor;
	params.FilterColor = FilterColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputColor != nullptr)
		*OutputColor = params.OutputColor;
}


// Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.Update Material
// ()
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  WeatherBlends                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Sky_Sphere_ARK_C::Update_Material(float Time, TArray<float>* WeatherBlends)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.Update Material");

	ABP_Sky_Sphere_ARK_C_Update_Material_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeatherBlends != nullptr)
		*WeatherBlends = params.WeatherBlends;
}


// Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.UpdateSunDirection
// ()

void ABP_Sky_Sphere_ARK_C::UpdateSunDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.UpdateSunDirection");

	ABP_Sky_Sphere_ARK_C_UpdateSunDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.UserConstructionScript
// (Native, NetResponse, Static, Public, HasOutParms, HasDefaults, NetClient, BlueprintCallable, Const)

void ABP_Sky_Sphere_ARK_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.UserConstructionScript");

	ABP_Sky_Sphere_ARK_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_147_ActorMatineeUpdated__DelegateSignature
// ()

void ABP_Sky_Sphere_ARK_C::BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_147_ActorMatineeUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_147_ActorMatineeUpdated__DelegateSignature");

	ABP_Sky_Sphere_ARK_C_BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_147_ActorMatineeUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.ExecuteUbergraph_BP_Sky_Sphere_ARK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Sky_Sphere_ARK_C::ExecuteUbergraph_BP_Sky_Sphere_ARK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C.ExecuteUbergraph_BP_Sky_Sphere_ARK");

	ABP_Sky_Sphere_ARK_C_ExecuteUbergraph_BP_Sky_Sphere_ARK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
