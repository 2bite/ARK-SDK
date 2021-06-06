// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MammothTrumpet_Cooldown_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MammothTrumpet_Cooldown.Buff_MammothTrumpet_Cooldown_C.UserConstructionScript
// ()

void ABuff_MammothTrumpet_Cooldown_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothTrumpet_Cooldown.Buff_MammothTrumpet_Cooldown_C.UserConstructionScript");

	ABuff_MammothTrumpet_Cooldown_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MammothTrumpet_Cooldown.Buff_MammothTrumpet_Cooldown_C.ExecuteUbergraph_Buff_MammothTrumpet_Cooldown
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MammothTrumpet_Cooldown_C::ExecuteUbergraph_Buff_MammothTrumpet_Cooldown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothTrumpet_Cooldown.Buff_MammothTrumpet_Cooldown_C.ExecuteUbergraph_Buff_MammothTrumpet_Cooldown");

	ABuff_MammothTrumpet_Cooldown_C_ExecuteUbergraph_Buff_MammothTrumpet_Cooldown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
