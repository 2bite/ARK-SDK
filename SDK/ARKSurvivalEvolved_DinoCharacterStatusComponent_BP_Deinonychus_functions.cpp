// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Deinonychus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Deinonychus.DinoCharacterStatusComponent_BP_Deinonychus_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Deinonychus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Deinonychus_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Deinonychus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Deinonychus.DinoCharacterStatusComponent_BP_Deinonychus_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Deinonychus");

	UDinoCharacterStatusComponent_BP_Deinonychus_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Deinonychus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
