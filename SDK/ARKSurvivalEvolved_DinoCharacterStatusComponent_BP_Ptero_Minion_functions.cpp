// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Ptero_Minion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Ptero_Minion.DinoCharacterStatusComponent_BP_Ptero_Minion_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Ptero_Minion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Ptero_Minion_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Ptero_Minion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Ptero_Minion.DinoCharacterStatusComponent_BP_Ptero_Minion_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Ptero_Minion");

	UDinoCharacterStatusComponent_BP_Ptero_Minion_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Ptero_Minion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
