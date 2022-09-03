// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekRifleScope_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekRifleScope.Buff_TekRifleScope_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekRifleScope_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekRifleScope.Buff_TekRifleScope_C.BuffTickClient");

	ABuff_TekRifleScope_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekRifleScope.Buff_TekRifleScope_C.UserConstructionScript
// ()

void ABuff_TekRifleScope_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekRifleScope.Buff_TekRifleScope_C.UserConstructionScript");

	ABuff_TekRifleScope_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekRifleScope.Buff_TekRifleScope_C.ExecuteUbergraph_Buff_TekRifleScope
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekRifleScope_C::ExecuteUbergraph_Buff_TekRifleScope(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekRifleScope.Buff_TekRifleScope_C.ExecuteUbergraph_Buff_TekRifleScope");

	ABuff_TekRifleScope_C_ExecuteUbergraph_Buff_TekRifleScope_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
