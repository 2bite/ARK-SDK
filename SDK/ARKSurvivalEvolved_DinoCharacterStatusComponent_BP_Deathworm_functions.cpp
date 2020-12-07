// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Deathworm_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Deathworm.DinoCharacterStatusComponent_BP_Deathworm_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Deathworm
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Deathworm_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Deathworm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Deathworm.DinoCharacterStatusComponent_BP_Deathworm_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Deathworm");

	UDinoCharacterStatusComponent_BP_Deathworm_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Deathworm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
