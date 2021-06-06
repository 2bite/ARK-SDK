// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EXPGain_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_EXPGain.Buff_EXPGain_C.UserConstructionScript
// ()

void ABuff_EXPGain_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EXPGain.Buff_EXPGain_C.UserConstructionScript");

	ABuff_EXPGain_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EXPGain.Buff_EXPGain_C.ExecuteUbergraph_Buff_EXPGain
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EXPGain_C::ExecuteUbergraph_Buff_EXPGain(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EXPGain.Buff_EXPGain_C.ExecuteUbergraph_Buff_EXPGain");

	ABuff_EXPGain_C_ExecuteUbergraph_Buff_EXPGain_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
