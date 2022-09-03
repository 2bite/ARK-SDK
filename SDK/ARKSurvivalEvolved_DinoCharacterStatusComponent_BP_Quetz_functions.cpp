// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Quetz_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Quetz.DinoCharacterStatusComponent_BP_Quetz_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Quetz
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Quetz_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Quetz(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Quetz.DinoCharacterStatusComponent_BP_Quetz_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Quetz");

	UDinoCharacterStatusComponent_BP_Quetz_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Quetz_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
