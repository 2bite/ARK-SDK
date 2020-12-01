// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_EX_Sky_Sphere_ARK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_EX_Sky_Sphere_ARK.BP_EX_Sky_Sphere_ARK_C.Texture Check Layer2
// ()
// Parameters:
// int                            Texture0                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Texture1                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Update                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EX_Sky_Sphere_ARK_C::Texture_Check_Layer2(int Texture0, int Texture1, bool* Update)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EX_Sky_Sphere_ARK.BP_EX_Sky_Sphere_ARK_C.Texture Check Layer2");

	ABP_EX_Sky_Sphere_ARK_C_Texture_Check_Layer2_Params params;
	params.Texture0 = Texture0;
	params.Texture1 = Texture1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Update != nullptr)
		*Update = params.Update;
}


// Function BP_EX_Sky_Sphere_ARK.BP_EX_Sky_Sphere_ARK_C.Texture Check Layer1
// ()
// Parameters:
// int                            Texture0                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Texture1                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Update                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EX_Sky_Sphere_ARK_C::Texture_Check_Layer1(int Texture0, int Texture1, bool* Update)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EX_Sky_Sphere_ARK.BP_EX_Sky_Sphere_ARK_C.Texture Check Layer1");

	ABP_EX_Sky_Sphere_ARK_C_Texture_Check_Layer1_Params params;
	params.Texture0 = Texture0;
	params.Texture1 = Texture1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Update != nullptr)
		*Update = params.Update;
}


// Function BP_EX_Sky_Sphere_ARK.BP_EX_Sky_Sphere_ARK_C.Update Material
// ()
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  WeatherBlends                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_EX_Sky_Sphere_ARK_C::Update_Material(float Time, TArray<float>* WeatherBlends)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EX_Sky_Sphere_ARK.BP_EX_Sky_Sphere_ARK_C.Update Material");

	ABP_EX_Sky_Sphere_ARK_C_Update_Material_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeatherBlends != nullptr)
		*WeatherBlends = params.WeatherBlends;
}


// Function BP_EX_Sky_Sphere_ARK.BP_EX_Sky_Sphere_ARK_C.ColorFilter
// ()
// Parameters:
// struct FLinearColor            InputColor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            FilterColor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            OutputColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EX_Sky_Sphere_ARK_C::ColorFilter(const struct FLinearColor& InputColor, const struct FLinearColor& FilterColor, struct FLinearColor* OutputColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EX_Sky_Sphere_ARK.BP_EX_Sky_Sphere_ARK_C.ColorFilter");

	ABP_EX_Sky_Sphere_ARK_C_ColorFilter_Params params;
	params.InputColor = InputColor;
	params.FilterColor = FilterColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputColor != nullptr)
		*OutputColor = params.OutputColor;
}


// Function BP_EX_Sky_Sphere_ARK.BP_EX_Sky_Sphere_ARK_C.Update Material Old
// ()
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  WeatherBlends                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_EX_Sky_Sphere_ARK_C::Update_Material_Old(float Time, TArray<float>* WeatherBlends)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EX_Sky_Sphere_ARK.BP_EX_Sky_Sphere_ARK_C.Update Material Old");

	ABP_EX_Sky_Sphere_ARK_C_Update_Material_Old_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeatherBlends != nullptr)
		*WeatherBlends = params.WeatherBlends;
}


// Function BP_EX_Sky_Sphere_ARK.BP_EX_Sky_Sphere_ARK_C.UpdateSunDirection
// ()
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_EX_Sky_Sphere_ARK_C::UpdateSunDirection(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EX_Sky_Sphere_ARK.BP_EX_Sky_Sphere_ARK_C.UpdateSunDirection");

	ABP_EX_Sky_Sphere_ARK_C_UpdateSunDirection_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EX_Sky_Sphere_ARK.BP_EX_Sky_Sphere_ARK_C.UserConstructionScript
// (NetRequest, Exec, NetResponse, MulticastDelegate, Private, HasDefaults, BlueprintPure, Const, NetValidate)

void ABP_EX_Sky_Sphere_ARK_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EX_Sky_Sphere_ARK.BP_EX_Sky_Sphere_ARK_C.UserConstructionScript");

	ABP_EX_Sky_Sphere_ARK_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EX_Sky_Sphere_ARK.BP_EX_Sky_Sphere_ARK_C.BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_147_ActorMatineeUpdated__DelegateSignature
// ()

void ABP_EX_Sky_Sphere_ARK_C::BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_147_ActorMatineeUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EX_Sky_Sphere_ARK.BP_EX_Sky_Sphere_ARK_C.BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_147_ActorMatineeUpdated__DelegateSignature");

	ABP_EX_Sky_Sphere_ARK_C_BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_147_ActorMatineeUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EX_Sky_Sphere_ARK.BP_EX_Sky_Sphere_ARK_C.ExecuteUbergraph_BP_EX_Sky_Sphere_ARK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_EX_Sky_Sphere_ARK_C::ExecuteUbergraph_BP_EX_Sky_Sphere_ARK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EX_Sky_Sphere_ARK.BP_EX_Sky_Sphere_ARK_C.ExecuteUbergraph_BP_EX_Sky_Sphere_ARK");

	ABP_EX_Sky_Sphere_ARK_C_ExecuteUbergraph_BP_EX_Sky_Sphere_ARK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
