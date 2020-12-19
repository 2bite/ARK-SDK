// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Scout_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Scout.DinoCharacterStatusComponent_BP_Scout_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Scout
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Scout_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Scout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Scout.DinoCharacterStatusComponent_BP_Scout_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Scout");

	UDinoCharacterStatusComponent_BP_Scout_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Scout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
