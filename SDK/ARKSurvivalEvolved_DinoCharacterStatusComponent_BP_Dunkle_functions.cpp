// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Dunkle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Dunkle.DinoCharacterStatusComponent_BP_Dunkle_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Dunkle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Dunkle_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Dunkle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Dunkle.DinoCharacterStatusComponent_BP_Dunkle_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Dunkle");

	UDinoCharacterStatusComponent_BP_Dunkle_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Dunkle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
