// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Bigfoot_Med_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Bigfoot_Med.DinoCharacterStatusComponent_BP_Bigfoot_Med_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Bigfoot_Med
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Bigfoot_Med_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Bigfoot_Med(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Bigfoot_Med.DinoCharacterStatusComponent_BP_Bigfoot_Med_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Bigfoot_Med");

	UDinoCharacterStatusComponent_BP_Bigfoot_Med_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Bigfoot_Med_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
