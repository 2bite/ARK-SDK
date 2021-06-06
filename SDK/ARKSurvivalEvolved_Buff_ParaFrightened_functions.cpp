// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ParaFrightened_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ParaFrightened.Buff_ParaFrightened_C.UserConstructionScript
// ()

void ABuff_ParaFrightened_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ParaFrightened.Buff_ParaFrightened_C.UserConstructionScript");

	ABuff_ParaFrightened_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ParaFrightened.Buff_ParaFrightened_C.ExecuteUbergraph_Buff_ParaFrightened
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ParaFrightened_C::ExecuteUbergraph_Buff_ParaFrightened(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ParaFrightened.Buff_ParaFrightened_C.ExecuteUbergraph_Buff_ParaFrightened");

	ABuff_ParaFrightened_C_ExecuteUbergraph_Buff_ParaFrightened_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
