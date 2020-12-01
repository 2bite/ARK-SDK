// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesCaveWater_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesCaveWater.DinoSpawnEntriesCaveWater_C.ExecuteUbergraph_DinoSpawnEntriesCaveWater
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesCaveWater_C::ExecuteUbergraph_DinoSpawnEntriesCaveWater(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesCaveWater.DinoSpawnEntriesCaveWater_C.ExecuteUbergraph_DinoSpawnEntriesCaveWater");

	UDinoSpawnEntriesCaveWater_C_ExecuteUbergraph_DinoSpawnEntriesCaveWater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
