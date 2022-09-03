// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ImpaledByStego_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ImpaledByStego_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.BuffTickClient");

	ABuff_ImpaledByStego_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ImpaledByStego_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.BuffTickServer");

	ABuff_ImpaledByStego_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ImpaledByStego_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.BPDeactivated");

	ABuff_ImpaledByStego_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ImpaledByStego_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.BPSetupForInstigator");

	ABuff_ImpaledByStego_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.UserConstructionScript
// ()

void ABuff_ImpaledByStego_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.UserConstructionScript");

	ABuff_ImpaledByStego_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.ExecuteUbergraph_Buff_ImpaledByStego
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ImpaledByStego_C::ExecuteUbergraph_Buff_ImpaledByStego(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.ExecuteUbergraph_Buff_ImpaledByStego");

	ABuff_ImpaledByStego_C_ExecuteUbergraph_Buff_ImpaledByStego_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
