// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_OceanCaveMedium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_OceanCaveMedium.DinoSpawnEntries_OceanCaveMedium_C.ExecuteUbergraph_DinoSpawnEntries_OceanCaveMedium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_OceanCaveMedium_C::ExecuteUbergraph_DinoSpawnEntries_OceanCaveMedium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_OceanCaveMedium.DinoSpawnEntries_OceanCaveMedium_C.ExecuteUbergraph_DinoSpawnEntries_OceanCaveMedium");

	UDinoSpawnEntries_OceanCaveMedium_C_ExecuteUbergraph_DinoSpawnEntries_OceanCaveMedium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
