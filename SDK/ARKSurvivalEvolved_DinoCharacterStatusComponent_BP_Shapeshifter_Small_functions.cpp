// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Shapeshifter_Small_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Shapeshifter_Small.DinoCharacterStatusComponent_BP_Shapeshifter_Small_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Shapeshifter_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Shapeshifter_Small_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Shapeshifter_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Shapeshifter_Small.DinoCharacterStatusComponent_BP_Shapeshifter_Small_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Shapeshifter_Small");

	UDinoCharacterStatusComponent_BP_Shapeshifter_Small_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Shapeshifter_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
