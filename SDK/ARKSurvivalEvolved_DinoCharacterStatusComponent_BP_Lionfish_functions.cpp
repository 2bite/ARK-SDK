// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Lionfish_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Lionfish.DinoCharacterStatusComponent_BP_Lionfish_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Lionfish
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Lionfish_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Lionfish(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Lionfish.DinoCharacterStatusComponent_BP_Lionfish_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Lionfish");

	UDinoCharacterStatusComponent_BP_Lionfish_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Lionfish_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
