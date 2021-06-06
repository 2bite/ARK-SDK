// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_LanternLizard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_LanternLizard.DinoCharacterStatusComponent_BP_LanternLizard_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_LanternLizard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_LanternLizard_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_LanternLizard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_LanternLizard.DinoCharacterStatusComponent_BP_LanternLizard_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_LanternLizard");

	UDinoCharacterStatusComponent_BP_LanternLizard_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_LanternLizard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
