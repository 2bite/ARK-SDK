// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Stunned_Purlovia_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Stunned_Purlovia.Buff_Stunned_Purlovia_C.UserConstructionScript
// ()

void ABuff_Stunned_Purlovia_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Stunned_Purlovia.Buff_Stunned_Purlovia_C.UserConstructionScript");

	ABuff_Stunned_Purlovia_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Stunned_Purlovia.Buff_Stunned_Purlovia_C.ExecuteUbergraph_Buff_Stunned_Purlovia
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Stunned_Purlovia_C::ExecuteUbergraph_Buff_Stunned_Purlovia(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Stunned_Purlovia.Buff_Stunned_Purlovia_C.ExecuteUbergraph_Buff_Stunned_Purlovia");

	ABuff_Stunned_Purlovia_C_ExecuteUbergraph_Buff_Stunned_Purlovia_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
