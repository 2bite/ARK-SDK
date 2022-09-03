// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_GeyserLaunch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GeyserLaunch_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.BPDeactivated");

	ABuff_GeyserLaunch_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GeyserLaunch_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.BPSetupForInstigator");

	ABuff_GeyserLaunch_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GeyserLaunch_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.BuffTickServer");

	ABuff_GeyserLaunch_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GeyserLaunch_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.BPActivated");

	ABuff_GeyserLaunch_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.UserConstructionScript
// ()

void ABuff_GeyserLaunch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.UserConstructionScript");

	ABuff_GeyserLaunch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.ExecuteUbergraph_Buff_GeyserLaunch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GeyserLaunch_C::ExecuteUbergraph_Buff_GeyserLaunch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.ExecuteUbergraph_Buff_GeyserLaunch");

	ABuff_GeyserLaunch_C_ExecuteUbergraph_Buff_GeyserLaunch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
