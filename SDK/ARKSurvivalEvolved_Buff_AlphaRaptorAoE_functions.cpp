// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AlphaRaptorAoE_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_AlphaRaptorAoE.Buff_AlphaRaptorAoE_C.UserConstructionScript
// ()

void ABuff_AlphaRaptorAoE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AlphaRaptorAoE.Buff_AlphaRaptorAoE_C.UserConstructionScript");

	ABuff_AlphaRaptorAoE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AlphaRaptorAoE.Buff_AlphaRaptorAoE_C.ExecuteUbergraph_Buff_AlphaRaptorAoE
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AlphaRaptorAoE_C::ExecuteUbergraph_Buff_AlphaRaptorAoE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AlphaRaptorAoE.Buff_AlphaRaptorAoE_C.ExecuteUbergraph_Buff_AlphaRaptorAoE");

	ABuff_AlphaRaptorAoE_C_ExecuteUbergraph_Buff_AlphaRaptorAoE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
