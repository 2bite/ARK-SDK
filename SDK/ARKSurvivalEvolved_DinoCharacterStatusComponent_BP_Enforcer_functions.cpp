// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Enforcer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Enforcer.DinoCharacterStatusComponent_BP_Enforcer_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Enforcer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Enforcer_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Enforcer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Enforcer.DinoCharacterStatusComponent_BP_Enforcer_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Enforcer");

	UDinoCharacterStatusComponent_BP_Enforcer_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Enforcer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
