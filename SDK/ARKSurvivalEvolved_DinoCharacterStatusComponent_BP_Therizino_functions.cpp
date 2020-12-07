// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Therizino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Therizino.DinoCharacterStatusComponent_BP_Therizino_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Therizino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Therizino_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Therizino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Therizino.DinoCharacterStatusComponent_BP_Therizino_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Therizino");

	UDinoCharacterStatusComponent_BP_Therizino_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Therizino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
