// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_ParkWater2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_ParkWater2.DinoSpawnEntries_ParkWater2_C.ExecuteUbergraph_DinoSpawnEntries_ParkWater2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_ParkWater2_C::ExecuteUbergraph_DinoSpawnEntries_ParkWater2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_ParkWater2.DinoSpawnEntries_ParkWater2_C.ExecuteUbergraph_DinoSpawnEntries_ParkWater2");

	UDinoSpawnEntries_ParkWater2_C_ExecuteUbergraph_DinoSpawnEntries_ParkWater2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif