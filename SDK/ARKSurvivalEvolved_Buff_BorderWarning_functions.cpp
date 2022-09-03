// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BorderWarning_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BorderWarning.Buff_BorderWarning_C.UserConstructionScript
// ()

void ABuff_BorderWarning_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BorderWarning.Buff_BorderWarning_C.UserConstructionScript");

	ABuff_BorderWarning_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BorderWarning.Buff_BorderWarning_C.ExecuteUbergraph_Buff_BorderWarning
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BorderWarning_C::ExecuteUbergraph_Buff_BorderWarning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BorderWarning.Buff_BorderWarning_C.ExecuteUbergraph_Buff_BorderWarning");

	ABuff_BorderWarning_C_ExecuteUbergraph_Buff_BorderWarning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
