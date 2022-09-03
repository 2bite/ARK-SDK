// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AndySpeedBoost_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.BP_ModifyCharacterFOV
// ()
// Parameters:
// float*                         inFOV                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_AndySpeedBoost_C::BP_ModifyCharacterFOV(float* inFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.BP_ModifyCharacterFOV");

	ABuff_AndySpeedBoost_C_BP_ModifyCharacterFOV_Params params;
	params.inFOV = inFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.UserConstructionScript
// ()

void ABuff_AndySpeedBoost_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.UserConstructionScript");

	ABuff_AndySpeedBoost_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AndySpeedBoost_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.BuffTickServer");

	ABuff_AndySpeedBoost_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AndySpeedBoost_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.BPSetupForInstigator");

	ABuff_AndySpeedBoost_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AndySpeedBoost_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.BPDeactivated");

	ABuff_AndySpeedBoost_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.ExecuteUbergraph_Buff_AndySpeedBoost
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AndySpeedBoost_C::ExecuteUbergraph_Buff_AndySpeedBoost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.ExecuteUbergraph_Buff_AndySpeedBoost");

	ABuff_AndySpeedBoost_C_ExecuteUbergraph_Buff_AndySpeedBoost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
