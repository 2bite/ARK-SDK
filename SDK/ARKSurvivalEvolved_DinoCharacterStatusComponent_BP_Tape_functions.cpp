// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Tape_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Tape.DinoCharacterStatusComponent_BP_Tape_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Tape
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Tape_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Tape(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Tape.DinoCharacterStatusComponent_BP_Tape_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Tape");

	UDinoCharacterStatusComponent_BP_Tape_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Tape_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
