// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Argent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Argent.DinoCharacterStatusComponent_BP_Argent_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Argent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Argent_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Argent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Argent.DinoCharacterStatusComponent_BP_Argent_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Argent");

	UDinoCharacterStatusComponent_BP_Argent_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Argent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
