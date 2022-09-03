// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AoE_FoliageTrap_Fertile01_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_AoE_FoliageTrap_Fertile01.Buff_AoE_FoliageTrap_Fertile01_C.UserConstructionScript
// ()

void ABuff_AoE_FoliageTrap_Fertile01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AoE_FoliageTrap_Fertile01.Buff_AoE_FoliageTrap_Fertile01_C.UserConstructionScript");

	ABuff_AoE_FoliageTrap_Fertile01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AoE_FoliageTrap_Fertile01.Buff_AoE_FoliageTrap_Fertile01_C.ExecuteUbergraph_Buff_AoE_FoliageTrap_Fertile01
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AoE_FoliageTrap_Fertile01_C::ExecuteUbergraph_Buff_AoE_FoliageTrap_Fertile01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AoE_FoliageTrap_Fertile01.Buff_AoE_FoliageTrap_Fertile01_C.ExecuteUbergraph_Buff_AoE_FoliageTrap_Fertile01");

	ABuff_AoE_FoliageTrap_Fertile01_C_ExecuteUbergraph_Buff_AoE_FoliageTrap_Fertile01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
