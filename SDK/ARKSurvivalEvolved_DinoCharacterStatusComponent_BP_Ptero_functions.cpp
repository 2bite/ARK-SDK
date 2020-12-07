// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Ptero_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Ptero.DinoCharacterStatusComponent_BP_Ptero_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Ptero
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Ptero_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Ptero(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Ptero.DinoCharacterStatusComponent_BP_Ptero_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Ptero");

	UDinoCharacterStatusComponent_BP_Ptero_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Ptero_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
