// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PounceDodge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PounceDodge.Buff_PounceDodge_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PounceDodge_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PounceDodge.Buff_PounceDodge_C.ReceiveTick");

	ABuff_PounceDodge_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PounceDodge.Buff_PounceDodge_C.BPPreventFirstPerson
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_PounceDodge_C::BPPreventFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PounceDodge.Buff_PounceDodge_C.BPPreventFirstPerson");

	ABuff_PounceDodge_C_BPPreventFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_PounceDodge.Buff_PounceDodge_C.PreventJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_PounceDodge_C::PreventJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PounceDodge.Buff_PounceDodge_C.PreventJump");

	ABuff_PounceDodge_C_PreventJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_PounceDodge.Buff_PounceDodge_C.UserConstructionScript
// ()

void ABuff_PounceDodge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PounceDodge.Buff_PounceDodge_C.UserConstructionScript");

	ABuff_PounceDodge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PounceDodge.Buff_PounceDodge_C.ServerDodge
// ()

void ABuff_PounceDodge_C::ServerDodge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PounceDodge.Buff_PounceDodge_C.ServerDodge");

	ABuff_PounceDodge_C_ServerDodge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PounceDodge.Buff_PounceDodge_C.MultiOnDodge
// ()

void ABuff_PounceDodge_C::MultiOnDodge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PounceDodge.Buff_PounceDodge_C.MultiOnDodge");

	ABuff_PounceDodge_C_MultiOnDodge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PounceDodge.Buff_PounceDodge_C.MultiOnDodgeEnd
// ()

void ABuff_PounceDodge_C::MultiOnDodgeEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PounceDodge.Buff_PounceDodge_C.MultiOnDodgeEnd");

	ABuff_PounceDodge_C_MultiOnDodgeEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PounceDodge.Buff_PounceDodge_C.ExecuteUbergraph_Buff_PounceDodge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PounceDodge_C::ExecuteUbergraph_Buff_PounceDodge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PounceDodge.Buff_PounceDodge_C.ExecuteUbergraph_Buff_PounceDodge");

	ABuff_PounceDodge_C_ExecuteUbergraph_Buff_PounceDodge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
