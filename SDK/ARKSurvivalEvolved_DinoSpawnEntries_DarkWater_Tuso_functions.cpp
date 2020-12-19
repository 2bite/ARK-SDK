// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_DarkWater_Tuso_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_DarkWater_Tuso.DinoSpawnEntries_DarkWater_Tuso_C.ExecuteUbergraph_DinoSpawnEntries_DarkWater_Tuso
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_DarkWater_Tuso_C::ExecuteUbergraph_DinoSpawnEntries_DarkWater_Tuso(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_DarkWater_Tuso.DinoSpawnEntries_DarkWater_Tuso_C.ExecuteUbergraph_DinoSpawnEntries_DarkWater_Tuso");

	UDinoSpawnEntries_DarkWater_Tuso_C_ExecuteUbergraph_DinoSpawnEntries_DarkWater_Tuso_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
