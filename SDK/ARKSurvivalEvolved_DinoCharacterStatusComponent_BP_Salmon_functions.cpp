// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Salmon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Salmon.DinoCharacterStatusComponent_BP_Salmon_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Salmon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Salmon_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Salmon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Salmon.DinoCharacterStatusComponent_BP_Salmon_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Salmon");

	UDinoCharacterStatusComponent_BP_Salmon_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Salmon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
