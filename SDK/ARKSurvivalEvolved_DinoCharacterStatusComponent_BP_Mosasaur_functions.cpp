// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Mosasaur_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Mosasaur.DinoCharacterStatusComponent_BP_Mosasaur_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Mosasaur
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Mosasaur_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Mosasaur(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Mosasaur.DinoCharacterStatusComponent_BP_Mosasaur_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Mosasaur");

	UDinoCharacterStatusComponent_BP_Mosasaur_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Mosasaur_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
