// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_StaminaDrainReduction_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_StaminaDrainReduction.Buff_StaminaDrainReduction_C.UserConstructionScript
// ()

void ABuff_StaminaDrainReduction_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StaminaDrainReduction.Buff_StaminaDrainReduction_C.UserConstructionScript");

	ABuff_StaminaDrainReduction_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StaminaDrainReduction.Buff_StaminaDrainReduction_C.ExecuteUbergraph_Buff_StaminaDrainReduction
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StaminaDrainReduction_C::ExecuteUbergraph_Buff_StaminaDrainReduction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StaminaDrainReduction.Buff_StaminaDrainReduction_C.ExecuteUbergraph_Buff_StaminaDrainReduction");

	ABuff_StaminaDrainReduction_C_ExecuteUbergraph_Buff_StaminaDrainReduction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
