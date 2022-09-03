// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Baryonyx_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Baryonyx.DinoCharacterStatusComponent_BP_Baryonyx_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Baryonyx
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Baryonyx_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Baryonyx(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Baryonyx.DinoCharacterStatusComponent_BP_Baryonyx_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Baryonyx");

	UDinoCharacterStatusComponent_BP_Baryonyx_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Baryonyx_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
