// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Rhino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Rhino.DinoCharacterStatusComponent_BP_Rhino_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Rhino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Rhino_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Rhino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Rhino.DinoCharacterStatusComponent_BP_Rhino_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Rhino");

	UDinoCharacterStatusComponent_BP_Rhino_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Rhino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
