// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GasVein_Base_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GasVein_Base_BP.GasVein_Base_BP_C.BPUnstasis
// ()

void AGasVein_Base_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasVein_Base_BP.GasVein_Base_BP_C.BPUnstasis");

	AGasVein_Base_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasVein_Base_BP.GasVein_Base_BP_C.BPHandleStructureEnabled
// ()
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AGasVein_Base_BP_C::BPHandleStructureEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasVein_Base_BP.GasVein_Base_BP_C.BPHandleStructureEnabled");

	AGasVein_Base_BP_C_BPHandleStructureEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasVein_Base_BP.GasVein_Base_BP_C.UserConstructionScript
// ()

void AGasVein_Base_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasVein_Base_BP.GasVein_Base_BP_C.UserConstructionScript");

	AGasVein_Base_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasVein_Base_BP.GasVein_Base_BP_C.ReceiveBeginPlay
// ()

void AGasVein_Base_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasVein_Base_BP.GasVein_Base_BP_C.ReceiveBeginPlay");

	AGasVein_Base_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasVein_Base_BP.GasVein_Base_BP_C.DoBurst
// ()

void AGasVein_Base_BP_C::DoBurst()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasVein_Base_BP.GasVein_Base_BP_C.DoBurst");

	AGasVein_Base_BP_C_DoBurst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasVein_Base_BP.GasVein_Base_BP_C.NetBurst
// ()

void AGasVein_Base_BP_C::NetBurst()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasVein_Base_BP.GasVein_Base_BP_C.NetBurst");

	AGasVein_Base_BP_C_NetBurst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasVein_Base_BP.GasVein_Base_BP_C.CheckBurst
// ()

void AGasVein_Base_BP_C::CheckBurst()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasVein_Base_BP.GasVein_Base_BP_C.CheckBurst");

	AGasVein_Base_BP_C_CheckBurst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasVein_Base_BP.GasVein_Base_BP_C.ExecuteUbergraph_GasVein_Base_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGasVein_Base_BP_C::ExecuteUbergraph_GasVein_Base_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasVein_Base_BP.GasVein_Base_BP_C.ExecuteUbergraph_GasVein_Base_BP");

	AGasVein_Base_BP_C_ExecuteUbergraph_GasVein_Base_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
