// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_InflatableRex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_InflatableRex.Buff_InflatableRex_C.BPGetPlayerFootStepSound
// ()
// Parameters:
// class USoundCue*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundCue* ABuff_InflatableRex_C::BPGetPlayerFootStepSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_InflatableRex.Buff_InflatableRex_C.BPGetPlayerFootStepSound");

	ABuff_InflatableRex_C_BPGetPlayerFootStepSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_InflatableRex.Buff_InflatableRex_C.UserConstructionScript
// ()

void ABuff_InflatableRex_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_InflatableRex.Buff_InflatableRex_C.UserConstructionScript");

	ABuff_InflatableRex_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_InflatableRex.Buff_InflatableRex_C.ExecuteUbergraph_Buff_InflatableRex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_InflatableRex_C::ExecuteUbergraph_Buff_InflatableRex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_InflatableRex.Buff_InflatableRex_C.ExecuteUbergraph_Buff_InflatableRex");

	ABuff_InflatableRex_C_ExecuteUbergraph_Buff_InflatableRex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
