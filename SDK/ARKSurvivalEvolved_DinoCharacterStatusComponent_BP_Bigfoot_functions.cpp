// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Bigfoot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Bigfoot.DinoCharacterStatusComponent_BP_Bigfoot_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Bigfoot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Bigfoot_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Bigfoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Bigfoot.DinoCharacterStatusComponent_BP_Bigfoot_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Bigfoot");

	UDinoCharacterStatusComponent_BP_Bigfoot_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Bigfoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
