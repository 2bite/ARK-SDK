// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_CityObelisk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_CityObelisk.DinoSpawnEntries_CityObelisk_C.ExecuteUbergraph_DinoSpawnEntries_CityObelisk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_CityObelisk_C::ExecuteUbergraph_DinoSpawnEntries_CityObelisk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_CityObelisk.DinoSpawnEntries_CityObelisk_C.ExecuteUbergraph_DinoSpawnEntries_CityObelisk");

	UDinoSpawnEntries_CityObelisk_C_ExecuteUbergraph_DinoSpawnEntries_CityObelisk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
