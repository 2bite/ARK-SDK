// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Snow_Otter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Snow_Otter.DinoColorSet_Snow_Otter_C.ExecuteUbergraph_DinoColorSet_Snow_Otter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Snow_Otter_C::ExecuteUbergraph_DinoColorSet_Snow_Otter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Snow_Otter.DinoColorSet_Snow_Otter_C.ExecuteUbergraph_DinoColorSet_Snow_Otter");

	UDinoColorSet_Snow_Otter_C_ExecuteUbergraph_DinoColorSet_Snow_Otter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
