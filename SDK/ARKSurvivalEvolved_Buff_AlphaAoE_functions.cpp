// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AlphaAoE_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_AlphaAoE.Buff_AlphaAoE_C.UserConstructionScript
// ()

void ABuff_AlphaAoE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AlphaAoE.Buff_AlphaAoE_C.UserConstructionScript");

	ABuff_AlphaAoE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AlphaAoE.Buff_AlphaAoE_C.ExecuteUbergraph_Buff_AlphaAoE
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AlphaAoE_C::ExecuteUbergraph_Buff_AlphaAoE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AlphaAoE.Buff_AlphaAoE_C.ExecuteUbergraph_Buff_AlphaAoE");

	ABuff_AlphaAoE_C_ExecuteUbergraph_Buff_AlphaAoE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
