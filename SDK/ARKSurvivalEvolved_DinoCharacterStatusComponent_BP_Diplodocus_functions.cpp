// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Diplodocus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Diplodocus.DinoCharacterStatusComponent_BP_Diplodocus_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Diplodocus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Diplodocus_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Diplodocus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Diplodocus.DinoCharacterStatusComponent_BP_Diplodocus_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Diplodocus");

	UDinoCharacterStatusComponent_BP_Diplodocus_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Diplodocus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
