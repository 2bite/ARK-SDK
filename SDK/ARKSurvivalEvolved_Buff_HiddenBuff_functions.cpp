// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HiddenBuff_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_HiddenBuff.Buff_HiddenBuff_C.UserConstructionScript
// ()

void ABuff_HiddenBuff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HiddenBuff.Buff_HiddenBuff_C.UserConstructionScript");

	ABuff_HiddenBuff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HiddenBuff.Buff_HiddenBuff_C.ExecuteUbergraph_Buff_HiddenBuff
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HiddenBuff_C::ExecuteUbergraph_Buff_HiddenBuff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HiddenBuff.Buff_HiddenBuff_C.ExecuteUbergraph_Buff_HiddenBuff");

	ABuff_HiddenBuff_C_ExecuteUbergraph_Buff_HiddenBuff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
