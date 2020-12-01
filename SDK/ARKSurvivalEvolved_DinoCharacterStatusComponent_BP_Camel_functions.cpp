// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Camel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Camel.DinoCharacterStatusComponent_BP_Camel_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Camel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Camel_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Camel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Camel.DinoCharacterStatusComponent_BP_Camel_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Camel");

	UDinoCharacterStatusComponent_BP_Camel_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Camel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
