// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_CityCenter_DangerClose_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_CityCenter_DangerClose.DinoSpawnEntries_CityCenter_DangerClose_C.ExecuteUbergraph_DinoSpawnEntries_CityCenter_DangerClose
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_CityCenter_DangerClose_C::ExecuteUbergraph_DinoSpawnEntries_CityCenter_DangerClose(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_CityCenter_DangerClose.DinoSpawnEntries_CityCenter_DangerClose_C.ExecuteUbergraph_DinoSpawnEntries_CityCenter_DangerClose");

	UDinoSpawnEntries_CityCenter_DangerClose_C_ExecuteUbergraph_DinoSpawnEntries_CityCenter_DangerClose_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
