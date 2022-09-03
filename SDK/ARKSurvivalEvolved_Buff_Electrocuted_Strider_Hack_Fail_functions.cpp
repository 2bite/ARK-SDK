// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Electrocuted_Strider_Hack_Fail_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Electrocuted_Strider_Hack_Fail.Buff_Electrocuted_Strider_Hack_Fail_C.UserConstructionScript
// ()

void ABuff_Electrocuted_Strider_Hack_Fail_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Electrocuted_Strider_Hack_Fail.Buff_Electrocuted_Strider_Hack_Fail_C.UserConstructionScript");

	ABuff_Electrocuted_Strider_Hack_Fail_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Electrocuted_Strider_Hack_Fail.Buff_Electrocuted_Strider_Hack_Fail_C.ExecuteUbergraph_Buff_Electrocuted_Strider_Hack_Fail
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Electrocuted_Strider_Hack_Fail_C::ExecuteUbergraph_Buff_Electrocuted_Strider_Hack_Fail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Electrocuted_Strider_Hack_Fail.Buff_Electrocuted_Strider_Hack_Fail_C.ExecuteUbergraph_Buff_Electrocuted_Strider_Hack_Fail");

	ABuff_Electrocuted_Strider_Hack_Fail_C_ExecuteUbergraph_Buff_Electrocuted_Strider_Hack_Fail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
