// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_AlphaMEga_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_AlphaMEga.DinoCharacterStatusComponent_BP_AlphaMega_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_AlphaMega
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_AlphaMega_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_AlphaMega(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_AlphaMEga.DinoCharacterStatusComponent_BP_AlphaMega_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_AlphaMega");

	UDinoCharacterStatusComponent_BP_AlphaMega_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_AlphaMega_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
