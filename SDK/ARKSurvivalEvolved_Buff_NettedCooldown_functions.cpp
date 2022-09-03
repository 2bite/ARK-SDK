// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NettedCooldown_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_NettedCooldown.Buff_NettedCooldown_C.UserConstructionScript
// ()

void ABuff_NettedCooldown_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NettedCooldown.Buff_NettedCooldown_C.UserConstructionScript");

	ABuff_NettedCooldown_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NettedCooldown.Buff_NettedCooldown_C.ExecuteUbergraph_Buff_NettedCooldown
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NettedCooldown_C::ExecuteUbergraph_Buff_NettedCooldown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NettedCooldown.Buff_NettedCooldown_C.ExecuteUbergraph_Buff_NettedCooldown");

	ABuff_NettedCooldown_C_ExecuteUbergraph_Buff_NettedCooldown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
