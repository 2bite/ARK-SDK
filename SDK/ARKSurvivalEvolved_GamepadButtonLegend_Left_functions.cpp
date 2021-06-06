// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GamepadButtonLegend_Left_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GamepadButtonLegend_Left.GamepadButtonLegend_Left_C.ExecuteUbergraph_GamepadButtonLegend_Left
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGamepadButtonLegend_Left_C::ExecuteUbergraph_GamepadButtonLegend_Left(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadButtonLegend_Left.GamepadButtonLegend_Left_C.ExecuteUbergraph_GamepadButtonLegend_Left");

	UGamepadButtonLegend_Left_C_ExecuteUbergraph_GamepadButtonLegend_Left_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
