// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DyeRegionButton_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DyeRegionButton.DyeRegionButton_C.ExecuteUbergraph_DyeRegionButton
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDyeRegionButton_C::ExecuteUbergraph_DyeRegionButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DyeRegionButton.DyeRegionButton_C.ExecuteUbergraph_DyeRegionButton");

	UDyeRegionButton_C_ExecuteUbergraph_DyeRegionButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
