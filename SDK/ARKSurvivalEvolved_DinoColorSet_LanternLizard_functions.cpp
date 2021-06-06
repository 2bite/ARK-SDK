// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_LanternLizard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_LanternLizard.DinoColorSet_LanternLizard_C.ExecuteUbergraph_DinoColorSet_LanternLizard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_LanternLizard_C::ExecuteUbergraph_DinoColorSet_LanternLizard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_LanternLizard.DinoColorSet_LanternLizard_C.ExecuteUbergraph_DinoColorSet_LanternLizard");

	UDinoColorSet_LanternLizard_C_ExecuteUbergraph_DinoColorSet_LanternLizard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
