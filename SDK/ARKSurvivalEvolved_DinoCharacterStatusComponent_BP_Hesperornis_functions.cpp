// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Hesperornis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Hesperornis.DinoCharacterStatusComponent_BP_Hesperornis_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Hesperornis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Hesperornis_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Hesperornis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Hesperornis.DinoCharacterStatusComponent_BP_Hesperornis_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Hesperornis");

	UDinoCharacterStatusComponent_BP_Hesperornis_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Hesperornis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
