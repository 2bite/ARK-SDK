// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Gigant_Corrupt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Gigant_Corrupt.DinoCharacterStatusComponent_BP_Gigant_Corrupt_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Gigant_Corrupt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Gigant_Corrupt_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Gigant_Corrupt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Gigant_Corrupt.DinoCharacterStatusComponent_BP_Gigant_Corrupt_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Gigant_Corrupt");

	UDinoCharacterStatusComponent_BP_Gigant_Corrupt_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Gigant_Corrupt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
