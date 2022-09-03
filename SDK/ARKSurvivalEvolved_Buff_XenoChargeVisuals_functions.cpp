// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_XenoChargeVisuals_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_XenoChargeVisuals.Buff_XenoChargeVisuals_C.UserConstructionScript
// ()

void ABuff_XenoChargeVisuals_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_XenoChargeVisuals.Buff_XenoChargeVisuals_C.UserConstructionScript");

	ABuff_XenoChargeVisuals_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_XenoChargeVisuals.Buff_XenoChargeVisuals_C.ExecuteUbergraph_Buff_XenoChargeVisuals
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_XenoChargeVisuals_C::ExecuteUbergraph_Buff_XenoChargeVisuals(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_XenoChargeVisuals.Buff_XenoChargeVisuals_C.ExecuteUbergraph_Buff_XenoChargeVisuals");

	ABuff_XenoChargeVisuals_C_ExecuteUbergraph_Buff_XenoChargeVisuals_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
