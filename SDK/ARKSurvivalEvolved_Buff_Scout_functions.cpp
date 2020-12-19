// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Scout_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Scout.Buff_Scout_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Scout_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Scout.Buff_Scout_C.BuffTickClient");

	ABuff_Scout_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Scout.Buff_Scout_C.UserConstructionScript
// ()

void ABuff_Scout_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Scout.Buff_Scout_C.UserConstructionScript");

	ABuff_Scout_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Scout.Buff_Scout_C.ExecuteUbergraph_Buff_Scout
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Scout_C::ExecuteUbergraph_Buff_Scout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Scout.Buff_Scout_C.ExecuteUbergraph_Buff_Scout");

	ABuff_Scout_C_ExecuteUbergraph_Buff_Scout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
