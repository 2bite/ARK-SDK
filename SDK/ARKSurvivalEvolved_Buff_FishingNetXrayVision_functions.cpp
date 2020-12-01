// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FishingNetXrayVision_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_FishingNetXrayVision_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.BPGetHUDElements");

	ABuff_FishingNetXrayVision_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.clear caught animals
// ()

void ABuff_FishingNetXrayVision_C::clear_caught_animals()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.clear caught animals");

	ABuff_FishingNetXrayVision_C_clear_caught_animals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.Set All Components Render Custom Depth
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           render_custom_depth            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FishingNetXrayVision_C::Set_All_Components_Render_Custom_Depth(class AActor* Actor, bool render_custom_depth)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.Set All Components Render Custom Depth");

	ABuff_FishingNetXrayVision_C_Set_All_Components_Render_Custom_Depth_Params params;
	params.Actor = Actor;
	params.render_custom_depth = render_custom_depth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.set all components custom depth stencil value
// ()
// Parameters:
// int                            stencil_Value                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FishingNetXrayVision_C::set_all_components_custom_depth_stencil_value(int stencil_Value, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.set all components custom depth stencil value");

	ABuff_FishingNetXrayVision_C_set_all_components_custom_depth_stencil_value_Params params;
	params.stencil_Value = stencil_Value;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FishingNetXrayVision_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.BuffTickClient");

	ABuff_FishingNetXrayVision_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FishingNetXrayVision_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.BuffTickServer");

	ABuff_FishingNetXrayVision_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.ReceiveBeginPlay
// ()

void ABuff_FishingNetXrayVision_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.ReceiveBeginPlay");

	ABuff_FishingNetXrayVision_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FishingNetXrayVision_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.BPDeactivated");

	ABuff_FishingNetXrayVision_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.UserConstructionScript
// ()

void ABuff_FishingNetXrayVision_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.UserConstructionScript");

	ABuff_FishingNetXrayVision_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.ExecuteUbergraph_Buff_FishingNetXrayVision
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FishingNetXrayVision_C::ExecuteUbergraph_Buff_FishingNetXrayVision(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.ExecuteUbergraph_Buff_FishingNetXrayVision");

	ABuff_FishingNetXrayVision_C_ExecuteUbergraph_Buff_FishingNetXrayVision_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
