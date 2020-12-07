// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MammothTrumpet_Debuff_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MammothTrumpet_Debuff.Buff_MammothTrumpet_Debuff_C.UserConstructionScript
// ()

void ABuff_MammothTrumpet_Debuff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothTrumpet_Debuff.Buff_MammothTrumpet_Debuff_C.UserConstructionScript");

	ABuff_MammothTrumpet_Debuff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MammothTrumpet_Debuff.Buff_MammothTrumpet_Debuff_C.ExecuteUbergraph_Buff_MammothTrumpet_Debuff
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MammothTrumpet_Debuff_C::ExecuteUbergraph_Buff_MammothTrumpet_Debuff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothTrumpet_Debuff.Buff_MammothTrumpet_Debuff_C.ExecuteUbergraph_Buff_MammothTrumpet_Debuff");

	ABuff_MammothTrumpet_Debuff_C_ExecuteUbergraph_Buff_MammothTrumpet_Debuff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
