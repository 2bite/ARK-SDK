// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Ichthyornis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Ichthyornis.DinoCharacterStatusComponent_BP_Ichthyornis_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Ichthyornis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Ichthyornis_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Ichthyornis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Ichthyornis.DinoCharacterStatusComponent_BP_Ichthyornis_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Ichthyornis");

	UDinoCharacterStatusComponent_BP_Ichthyornis_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Ichthyornis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
