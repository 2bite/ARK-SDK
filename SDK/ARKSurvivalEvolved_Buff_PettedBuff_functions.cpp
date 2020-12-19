// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PettedBuff_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PettedBuff.Buff_PettedBuff_C.UserConstructionScript
// ()

void ABuff_PettedBuff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PettedBuff.Buff_PettedBuff_C.UserConstructionScript");

	ABuff_PettedBuff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PettedBuff.Buff_PettedBuff_C.ExecuteUbergraph_Buff_PettedBuff
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PettedBuff_C::ExecuteUbergraph_Buff_PettedBuff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PettedBuff.Buff_PettedBuff_C.ExecuteUbergraph_Buff_PettedBuff");

	ABuff_PettedBuff_C_ExecuteUbergraph_Buff_PettedBuff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
