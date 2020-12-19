// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_RockDrake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_RockDrake.DinoTamedInventoryComponent_RockDrake_C.ExecuteUbergraph_DinoTamedInventoryComponent_RockDrake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_RockDrake_C::ExecuteUbergraph_DinoTamedInventoryComponent_RockDrake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_RockDrake.DinoTamedInventoryComponent_RockDrake_C.ExecuteUbergraph_DinoTamedInventoryComponent_RockDrake");

	UDinoTamedInventoryComponent_RockDrake_C_ExecuteUbergraph_DinoTamedInventoryComponent_RockDrake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
