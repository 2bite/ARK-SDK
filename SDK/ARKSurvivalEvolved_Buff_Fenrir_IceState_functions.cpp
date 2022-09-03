// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Fenrir_IceState_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Fenrir_IceState.Buff_Fenrir_IceState_C.UserConstructionScript
// ()

void ABuff_Fenrir_IceState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Fenrir_IceState.Buff_Fenrir_IceState_C.UserConstructionScript");

	ABuff_Fenrir_IceState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Fenrir_IceState.Buff_Fenrir_IceState_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Fenrir_IceState_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Fenrir_IceState.Buff_Fenrir_IceState_C.BPSetupForInstigator");

	ABuff_Fenrir_IceState_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Fenrir_IceState.Buff_Fenrir_IceState_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Fenrir_IceState_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Fenrir_IceState.Buff_Fenrir_IceState_C.BPDeactivated");

	ABuff_Fenrir_IceState_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Fenrir_IceState.Buff_Fenrir_IceState_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Fenrir_IceState_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Fenrir_IceState.Buff_Fenrir_IceState_C.BuffTickServer");

	ABuff_Fenrir_IceState_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Fenrir_IceState.Buff_Fenrir_IceState_C.ExecuteUbergraph_Buff_Fenrir_IceState
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Fenrir_IceState_C::ExecuteUbergraph_Buff_Fenrir_IceState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Fenrir_IceState.Buff_Fenrir_IceState_C.ExecuteUbergraph_Buff_Fenrir_IceState");

	ABuff_Fenrir_IceState_C_ExecuteUbergraph_Buff_Fenrir_IceState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
