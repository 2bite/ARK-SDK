// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Mammoth_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Mammoth.DinoCharacterStatusComponent_BP_Mammoth_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Mammoth
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Mammoth_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Mammoth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Mammoth.DinoCharacterStatusComponent_BP_Mammoth_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Mammoth");

	UDinoCharacterStatusComponent_BP_Mammoth_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Mammoth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
