// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekClaw_Target_MaxPower_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.ReceiveDestroyed
// ()

void ABuff_TekClaw_Target_MaxPower_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.ReceiveDestroyed");

	ABuff_TekClaw_Target_MaxPower_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.BPSetupForInstigator
// (NetReliable, Exec, Event, Static, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekClaw_Target_MaxPower_C::STATIC_BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.BPSetupForInstigator");

	ABuff_TekClaw_Target_MaxPower_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.UserConstructionScript
// ()

void ABuff_TekClaw_Target_MaxPower_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.UserConstructionScript");

	ABuff_TekClaw_Target_MaxPower_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.HideMesh
// ()
// Parameters:
// bool                           Hide                           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekClaw_Target_MaxPower_C::HideMesh(bool Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.HideMesh");

	ABuff_TekClaw_Target_MaxPower_C_HideMesh_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.ExecuteUbergraph_Buff_TekClaw_Target_MaxPower
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekClaw_Target_MaxPower_C::ExecuteUbergraph_Buff_TekClaw_Target_MaxPower(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.ExecuteUbergraph_Buff_TekClaw_Target_MaxPower");

	ABuff_TekClaw_Target_MaxPower_C_ExecuteUbergraph_Buff_TekClaw_Target_MaxPower_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
