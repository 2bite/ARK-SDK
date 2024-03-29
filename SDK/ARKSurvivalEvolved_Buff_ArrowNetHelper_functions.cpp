// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ArrowNetHelper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ArrowNetHelper.Buff_ArrowNetHelper_C.BuffTickClient
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ArrowNetHelper_C::STATIC_BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ArrowNetHelper.Buff_ArrowNetHelper_C.BuffTickClient");

	ABuff_ArrowNetHelper_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ArrowNetHelper.Buff_ArrowNetHelper_C.UserConstructionScript
// ()

void ABuff_ArrowNetHelper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ArrowNetHelper.Buff_ArrowNetHelper_C.UserConstructionScript");

	ABuff_ArrowNetHelper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ArrowNetHelper.Buff_ArrowNetHelper_C.ExecuteUbergraph_Buff_ArrowNetHelper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ArrowNetHelper_C::ExecuteUbergraph_Buff_ArrowNetHelper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ArrowNetHelper.Buff_ArrowNetHelper_C.ExecuteUbergraph_Buff_ArrowNetHelper");

	ABuff_ArrowNetHelper_C_ExecuteUbergraph_Buff_ArrowNetHelper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
