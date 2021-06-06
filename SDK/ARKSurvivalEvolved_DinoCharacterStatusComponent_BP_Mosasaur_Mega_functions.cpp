// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Mosasaur_Mega_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Mosasaur_Mega.DinoCharacterStatusComponent_BP_Mosasaur_Mega_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Mosasaur_Mega
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Mosasaur_Mega_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Mosasaur_Mega(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Mosasaur_Mega.DinoCharacterStatusComponent_BP_Mosasaur_Mega_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Mosasaur_Mega");

	UDinoCharacterStatusComponent_BP_Mosasaur_Mega_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Mosasaur_Mega_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
