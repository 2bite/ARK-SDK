// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GamepadButtonLegend_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GamepadButtonLegend.GamepadButtonLegend_C.ExecuteUbergraph_GamepadButtonLegend
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGamepadButtonLegend_C::ExecuteUbergraph_GamepadButtonLegend(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadButtonLegend.GamepadButtonLegend_C.ExecuteUbergraph_GamepadButtonLegend");

	UGamepadButtonLegend_C_ExecuteUbergraph_GamepadButtonLegend_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
