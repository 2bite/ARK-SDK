// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Microraptor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Microraptor.DinoCharacterStatusComponent_BP_Microraptor_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Microraptor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Microraptor_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Microraptor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Microraptor.DinoCharacterStatusComponent_BP_Microraptor_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Microraptor");

	UDinoCharacterStatusComponent_BP_Microraptor_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Microraptor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
