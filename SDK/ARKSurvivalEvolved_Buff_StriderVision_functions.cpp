// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_StriderVision_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_StriderVision.Buff_StriderVision_C.GetHudData
// (NetReliable, Exec, Native, Static, MulticastDelegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 PingWorldLocation              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ProgressBarValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            BaseColor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RingScale                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Visibility                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderVision_C::STATIC_GetHudData(struct FVector* PingWorldLocation, float* ProgressBarValue, struct FLinearColor* BaseColor, float* RingScale, float* Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderVision.Buff_StriderVision_C.GetHudData");

	ABuff_StriderVision_C_GetHudData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PingWorldLocation != nullptr)
		*PingWorldLocation = params.PingWorldLocation;
	if (ProgressBarValue != nullptr)
		*ProgressBarValue = params.ProgressBarValue;
	if (BaseColor != nullptr)
		*BaseColor = params.BaseColor;
	if (RingScale != nullptr)
		*RingScale = params.RingScale;
	if (Visibility != nullptr)
		*Visibility = params.Visibility;
}


// Function Buff_StriderVision.Buff_StriderVision_C.stop highlighting target
// ()
// Parameters:
// class APrimalCharacter*        InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderVision_C::stop_highlighting_target(class APrimalCharacter* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderVision.Buff_StriderVision_C.stop highlighting target");

	ABuff_StriderVision_C_stop_highlighting_target_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderVision.Buff_StriderVision_C.set all target bounds to 1
// ()

void ABuff_StriderVision_C::set_all_target_bounds_to_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderVision.Buff_StriderVision_C.set all target bounds to 1");

	ABuff_StriderVision_C_set_all_target_bounds_to_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderVision.Buff_StriderVision_C.update viewed targets
// ()
// Parameters:
// bool                           Deactivate                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderVision_C::update_viewed_targets(bool Deactivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderVision.Buff_StriderVision_C.update viewed targets");

	ABuff_StriderVision_C_update_viewed_targets_Params params;
	params.Deactivate = Deactivate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderVision.Buff_StriderVision_C.Keep Visible
// ()

void ABuff_StriderVision_C::Keep_Visible()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderVision.Buff_StriderVision_C.Keep Visible");

	ABuff_StriderVision_C_Keep_Visible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderVision.Buff_StriderVision_C.HideBuffFromHUD
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_StriderVision_C::HideBuffFromHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderVision.Buff_StriderVision_C.HideBuffFromHUD");

	ABuff_StriderVision_C_HideBuffFromHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_StriderVision.Buff_StriderVision_C.Setup HUDWidget
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderVision_C::Setup_HUDWidget(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderVision.Buff_StriderVision_C.Setup HUDWidget");

	ABuff_StriderVision_C_Setup_HUDWidget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderVision.Buff_StriderVision_C.DestroyHUDWidget
// ()
// Parameters:
// bool                           Bypass                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderVision_C::DestroyHUDWidget(bool Bypass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderVision.Buff_StriderVision_C.DestroyHUDWidget");

	ABuff_StriderVision_C_DestroyHUDWidget_Params params;
	params.Bypass = Bypass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderVision.Buff_StriderVision_C.Flash Target
// ()

void ABuff_StriderVision_C::Flash_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderVision.Buff_StriderVision_C.Flash Target");

	ABuff_StriderVision_C_Flash_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderVision.Buff_StriderVision_C.Highlight latest shared target
// ()

void ABuff_StriderVision_C::Highlight_latest_shared_target()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderVision.Buff_StriderVision_C.Highlight latest shared target");

	ABuff_StriderVision_C_Highlight_latest_shared_target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderVision.Buff_StriderVision_C.Keep Shared Targets Active
// ()

void ABuff_StriderVision_C::Keep_Shared_Targets_Active()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderVision.Buff_StriderVision_C.Keep Shared Targets Active");

	ABuff_StriderVision_C_Keep_Shared_Targets_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderVision.Buff_StriderVision_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderVision_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderVision.Buff_StriderVision_C.BPActivated");

	ABuff_StriderVision_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderVision.Buff_StriderVision_C.Set All Components Render Custom Depth
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           render_custom_depth            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderVision_C::Set_All_Components_Render_Custom_Depth(class AActor* Actor, bool render_custom_depth)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderVision.Buff_StriderVision_C.Set All Components Render Custom Depth");

	ABuff_StriderVision_C_Set_All_Components_Render_Custom_Depth_Params params;
	params.Actor = Actor;
	params.render_custom_depth = render_custom_depth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderVision.Buff_StriderVision_C.Set All Components Custom Depth Stencil Value
// ()
// Parameters:
// int                            stencil_Value                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderVision_C::Set_All_Components_Custom_Depth_Stencil_Value(int stencil_Value, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderVision.Buff_StriderVision_C.Set All Components Custom Depth Stencil Value");

	ABuff_StriderVision_C_Set_All_Components_Custom_Depth_Stencil_Value_Params params;
	params.stencil_Value = stencil_Value;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderVision.Buff_StriderVision_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderVision_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderVision.Buff_StriderVision_C.BuffTickClient");

	ABuff_StriderVision_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderVision.Buff_StriderVision_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderVision_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderVision.Buff_StriderVision_C.BuffTickServer");

	ABuff_StriderVision_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderVision.Buff_StriderVision_C.ReceiveBeginPlay
// ()

void ABuff_StriderVision_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderVision.Buff_StriderVision_C.ReceiveBeginPlay");

	ABuff_StriderVision_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderVision.Buff_StriderVision_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderVision_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderVision.Buff_StriderVision_C.BPDeactivated");

	ABuff_StriderVision_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderVision.Buff_StriderVision_C.UserConstructionScript
// ()

void ABuff_StriderVision_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderVision.Buff_StriderVision_C.UserConstructionScript");

	ABuff_StriderVision_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderVision.Buff_StriderVision_C.ClearHUDReference
// ()

void ABuff_StriderVision_C::ClearHUDReference()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderVision.Buff_StriderVision_C.ClearHUDReference");

	ABuff_StriderVision_C_ClearHUDReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderVision.Buff_StriderVision_C.ExecuteUbergraph_Buff_StriderVision
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderVision_C::ExecuteUbergraph_Buff_StriderVision(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderVision.Buff_StriderVision_C.ExecuteUbergraph_Buff_StriderVision");

	ABuff_StriderVision_C_ExecuteUbergraph_Buff_StriderVision_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
