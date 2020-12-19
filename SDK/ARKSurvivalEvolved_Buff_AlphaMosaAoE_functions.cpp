// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AlphaMosaAoE_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_AlphaMosaAoE.Buff_AlphaMosaAoE_C.UserConstructionScript
// ()

void ABuff_AlphaMosaAoE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AlphaMosaAoE.Buff_AlphaMosaAoE_C.UserConstructionScript");

	ABuff_AlphaMosaAoE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AlphaMosaAoE.Buff_AlphaMosaAoE_C.ExecuteUbergraph_Buff_AlphaMosaAoE
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AlphaMosaAoE_C::ExecuteUbergraph_Buff_AlphaMosaAoE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AlphaMosaAoE.Buff_AlphaMosaAoE_C.ExecuteUbergraph_Buff_AlphaMosaAoE");

	ABuff_AlphaMosaAoE_C_ExecuteUbergraph_Buff_AlphaMosaAoE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
