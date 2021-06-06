// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sauropod_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sauropod_Character_BP.Sauropod_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ASauropod_Character_BP_C::GetSocketForMeleeTraceForHitBlockers(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sauropod_Character_BP.Sauropod_Character_BP_C.GetSocketForMeleeTraceForHitBlockers");

	ASauropod_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sauropod_Character_BP.Sauropod_Character_BP_C.UserConstructionScript
// ()

void ASauropod_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sauropod_Character_BP.Sauropod_Character_BP_C.UserConstructionScript");

	ASauropod_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sauropod_Character_BP.Sauropod_Character_BP_C.ExecuteUbergraph_Sauropod_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASauropod_Character_BP_C::ExecuteUbergraph_Sauropod_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sauropod_Character_BP.Sauropod_Character_BP_C.ExecuteUbergraph_Sauropod_Character_BP");

	ASauropod_Character_BP_C_ExecuteUbergraph_Sauropod_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
