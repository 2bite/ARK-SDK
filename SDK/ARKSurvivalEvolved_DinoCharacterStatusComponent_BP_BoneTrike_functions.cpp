// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_BoneTrike_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_BoneTrike.DinoCharacterStatusComponent_BP_BoneTrike_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_BoneTrike
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_BoneTrike_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_BoneTrike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_BoneTrike.DinoCharacterStatusComponent_BP_BoneTrike_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_BoneTrike");

	UDinoCharacterStatusComponent_BP_BoneTrike_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_BoneTrike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
