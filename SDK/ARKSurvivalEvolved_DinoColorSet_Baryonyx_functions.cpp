// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Baryonyx_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Baryonyx.DinoColorSet_Baryonyx_C.ExecuteUbergraph_DinoColorSet_Baryonyx
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Baryonyx_C::ExecuteUbergraph_DinoColorSet_Baryonyx(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Baryonyx.DinoColorSet_Baryonyx_C.ExecuteUbergraph_DinoColorSet_Baryonyx");

	UDinoColorSet_Baryonyx_C_ExecuteUbergraph_DinoColorSet_Baryonyx_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
