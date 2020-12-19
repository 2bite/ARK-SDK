// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AlphaCarnoAoE_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_AlphaCarnoAoE.Buff_AlphaCarnoAoE_C.UserConstructionScript
// ()

void ABuff_AlphaCarnoAoE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AlphaCarnoAoE.Buff_AlphaCarnoAoE_C.UserConstructionScript");

	ABuff_AlphaCarnoAoE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AlphaCarnoAoE.Buff_AlphaCarnoAoE_C.ExecuteUbergraph_Buff_AlphaCarnoAoE
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AlphaCarnoAoE_C::ExecuteUbergraph_Buff_AlphaCarnoAoE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AlphaCarnoAoE.Buff_AlphaCarnoAoE_C.ExecuteUbergraph_Buff_AlphaCarnoAoE");

	ABuff_AlphaCarnoAoE_C_ExecuteUbergraph_Buff_AlphaCarnoAoE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
