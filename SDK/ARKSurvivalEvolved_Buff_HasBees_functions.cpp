// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HasBees_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_HasBees.Buff_HasBees_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HasBees_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HasBees.Buff_HasBees_C.BPActivated");

	ABuff_HasBees_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HasBees.Buff_HasBees_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HasBees_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HasBees.Buff_HasBees_C.BuffTickServer");

	ABuff_HasBees_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HasBees.Buff_HasBees_C.UserConstructionScript
// ()

void ABuff_HasBees_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HasBees.Buff_HasBees_C.UserConstructionScript");

	ABuff_HasBees_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HasBees.Buff_HasBees_C.ExecuteUbergraph_Buff_HasBees
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HasBees_C::ExecuteUbergraph_Buff_HasBees(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HasBees.Buff_HasBees_C.ExecuteUbergraph_Buff_HasBees");

	ABuff_HasBees_C_ExecuteUbergraph_Buff_HasBees_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
