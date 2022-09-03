// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Dinopithecus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Dinopithecus.DinoCharacterStatusComponent_BP_Dinopithecus_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Dinopithecus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Dinopithecus_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Dinopithecus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Dinopithecus.DinoCharacterStatusComponent_BP_Dinopithecus_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Dinopithecus");

	UDinoCharacterStatusComponent_BP_Dinopithecus_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Dinopithecus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
