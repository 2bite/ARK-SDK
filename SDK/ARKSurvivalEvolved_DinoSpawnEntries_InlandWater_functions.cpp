// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_InlandWater_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_InlandWater.DinoSpawnEntries_InlandWater_C.ExecuteUbergraph_DinoSpawnEntries_InlandWater
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_InlandWater_C::ExecuteUbergraph_DinoSpawnEntries_InlandWater(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_InlandWater.DinoSpawnEntries_InlandWater_C.ExecuteUbergraph_DinoSpawnEntries_InlandWater");

	UDinoSpawnEntries_InlandWater_C_ExecuteUbergraph_DinoSpawnEntries_InlandWater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
