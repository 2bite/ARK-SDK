// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Scorpion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Scorpion.DinoCharacterStatusComponent_BP_Scorpion_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Scorpion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Scorpion_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Scorpion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Scorpion.DinoCharacterStatusComponent_BP_Scorpion_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Scorpion");

	UDinoCharacterStatusComponent_BP_Scorpion_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Scorpion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
