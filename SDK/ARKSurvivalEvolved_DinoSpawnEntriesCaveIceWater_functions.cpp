// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesCaveIceWater_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesCaveIceWater.DinoSpawnEntriesCaveIceWater_C.ExecuteUbergraph_DinoSpawnEntriesCaveIceWater
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesCaveIceWater_C::ExecuteUbergraph_DinoSpawnEntriesCaveIceWater(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesCaveIceWater.DinoSpawnEntriesCaveIceWater_C.ExecuteUbergraph_DinoSpawnEntriesCaveIceWater");

	UDinoSpawnEntriesCaveIceWater_C_ExecuteUbergraph_DinoSpawnEntriesCaveIceWater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
