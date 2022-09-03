// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_RockDrake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_RockDrake.DinoCharacterStatusComponent_BP_RockDrake_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_RockDrake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_RockDrake_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_RockDrake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_RockDrake.DinoCharacterStatusComponent_BP_RockDrake_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_RockDrake");

	UDinoCharacterStatusComponent_BP_RockDrake_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_RockDrake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
