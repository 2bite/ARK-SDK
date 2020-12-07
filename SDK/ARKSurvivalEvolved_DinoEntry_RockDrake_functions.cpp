// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_RockDrake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_RockDrake.DinoEntry_RockDrake_C.ExecuteUbergraph_DinoEntry_RockDrake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_RockDrake_C::ExecuteUbergraph_DinoEntry_RockDrake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_RockDrake.DinoEntry_RockDrake_C.ExecuteUbergraph_DinoEntry_RockDrake");

	UDinoEntry_RockDrake_C_ExecuteUbergraph_DinoEntry_RockDrake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
