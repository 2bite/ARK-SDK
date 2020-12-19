// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Mantis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Mantis.DinoCharacterStatusComponent_BP_Mantis_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Mantis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Mantis_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Mantis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Mantis.DinoCharacterStatusComponent_BP_Mantis_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Mantis");

	UDinoCharacterStatusComponent_BP_Mantis_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Mantis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
