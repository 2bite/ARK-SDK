// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_OceanCaveHard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_OceanCaveHard.DinoSpawnEntries_OceanCaveHard_C.ExecuteUbergraph_DinoSpawnEntries_OceanCaveHard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_OceanCaveHard_C::ExecuteUbergraph_DinoSpawnEntries_OceanCaveHard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_OceanCaveHard.DinoSpawnEntries_OceanCaveHard_C.ExecuteUbergraph_DinoSpawnEntries_OceanCaveHard");

	UDinoSpawnEntries_OceanCaveHard_C_ExecuteUbergraph_DinoSpawnEntries_OceanCaveHard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif