// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Snow_Argentavis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Snow_Argentavis.DinoColorSet_Snow_Argentavis_C.ExecuteUbergraph_DinoColorSet_Snow_Argentavis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Snow_Argentavis_C::ExecuteUbergraph_DinoColorSet_Snow_Argentavis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Snow_Argentavis.DinoColorSet_Snow_Argentavis_C.ExecuteUbergraph_DinoColorSet_Snow_Argentavis");

	UDinoColorSet_Snow_Argentavis_C_ExecuteUbergraph_DinoColorSet_Snow_Argentavis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
