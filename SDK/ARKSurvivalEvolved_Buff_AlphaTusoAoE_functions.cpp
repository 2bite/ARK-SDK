// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AlphaTusoAoE_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_AlphaTusoAoE.Buff_AlphaTusoAoE_C.UserConstructionScript
// ()

void ABuff_AlphaTusoAoE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AlphaTusoAoE.Buff_AlphaTusoAoE_C.UserConstructionScript");

	ABuff_AlphaTusoAoE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AlphaTusoAoE.Buff_AlphaTusoAoE_C.ExecuteUbergraph_Buff_AlphaTusoAoE
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AlphaTusoAoE_C::ExecuteUbergraph_Buff_AlphaTusoAoE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AlphaTusoAoE.Buff_AlphaTusoAoE_C.ExecuteUbergraph_Buff_AlphaTusoAoE");

	ABuff_AlphaTusoAoE_C_ExecuteUbergraph_Buff_AlphaTusoAoE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
