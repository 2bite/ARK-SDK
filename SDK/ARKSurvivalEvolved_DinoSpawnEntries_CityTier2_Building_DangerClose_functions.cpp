// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_CityTier2_Building_DangerClose_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_CityTier2_Building_DangerClose.DinoSpawnEntries_CityTier2_Building_DangerClose_C.ExecuteUbergraph_DinoSpawnEntries_CityTier2_Building_DangerClose
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_CityTier2_Building_DangerClose_C::ExecuteUbergraph_DinoSpawnEntries_CityTier2_Building_DangerClose(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_CityTier2_Building_DangerClose.DinoSpawnEntries_CityTier2_Building_DangerClose_C.ExecuteUbergraph_DinoSpawnEntries_CityTier2_Building_DangerClose");

	UDinoSpawnEntries_CityTier2_Building_DangerClose_C_ExecuteUbergraph_DinoSpawnEntries_CityTier2_Building_DangerClose_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
