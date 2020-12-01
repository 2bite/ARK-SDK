// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Stag_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Stag.DinoCharacterStatusComponent_BP_Stag_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Stag
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Stag_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Stag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Stag.DinoCharacterStatusComponent_BP_Stag_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Stag");

	UDinoCharacterStatusComponent_BP_Stag_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Stag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
