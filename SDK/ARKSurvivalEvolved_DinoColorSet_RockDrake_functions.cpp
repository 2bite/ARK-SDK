// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_RockDrake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_RockDrake.DinoColorSet_RockDrake_C.ExecuteUbergraph_DinoColorSet_RockDrake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_RockDrake_C::ExecuteUbergraph_DinoColorSet_RockDrake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_RockDrake.DinoColorSet_RockDrake_C.ExecuteUbergraph_DinoColorSet_RockDrake");

	UDinoColorSet_RockDrake_C_ExecuteUbergraph_DinoColorSet_RockDrake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
