// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Base_AoE_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Base_AoE.Buff_Base_AoE_C.UserConstructionScript
// ()

void ABuff_Base_AoE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_AoE.Buff_Base_AoE_C.UserConstructionScript");

	ABuff_Base_AoE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Base_AoE.Buff_Base_AoE_C.ExecuteUbergraph_Buff_Base_AoE
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Base_AoE_C::ExecuteUbergraph_Buff_Base_AoE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_AoE.Buff_Base_AoE_C.ExecuteUbergraph_Buff_Base_AoE");

	ABuff_Base_AoE_C_ExecuteUbergraph_Buff_Base_AoE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
