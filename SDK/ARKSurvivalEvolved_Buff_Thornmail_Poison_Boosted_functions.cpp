// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Thornmail_Poison_Boosted_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Thornmail_Poison_Boosted.Buff_Thornmail_Poison_Boosted_C.UserConstructionScript
// ()

void ABuff_Thornmail_Poison_Boosted_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Thornmail_Poison_Boosted.Buff_Thornmail_Poison_Boosted_C.UserConstructionScript");

	ABuff_Thornmail_Poison_Boosted_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Thornmail_Poison_Boosted.Buff_Thornmail_Poison_Boosted_C.ExecuteUbergraph_Buff_Thornmail_Poison_Boosted
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Thornmail_Poison_Boosted_C::ExecuteUbergraph_Buff_Thornmail_Poison_Boosted(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Thornmail_Poison_Boosted.Buff_Thornmail_Poison_Boosted_C.ExecuteUbergraph_Buff_Thornmail_Poison_Boosted");

	ABuff_Thornmail_Poison_Boosted_C_ExecuteUbergraph_Buff_Thornmail_Poison_Boosted_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
