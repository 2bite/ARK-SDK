// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Pela_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Pela.DinoCharacterStatusComponent_BP_Pela_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Pela
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Pela_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Pela(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Pela.DinoCharacterStatusComponent_BP_Pela_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Pela");

	UDinoCharacterStatusComponent_BP_Pela_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Pela_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
