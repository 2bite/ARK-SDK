// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoSpawnEntriesWater_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SE_DinoSpawnEntriesWater.SE_DinoSpawnEntriesWater_C.ExecuteUbergraph_SE_DinoSpawnEntriesWater
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USE_DinoSpawnEntriesWater_C::ExecuteUbergraph_SE_DinoSpawnEntriesWater(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SE_DinoSpawnEntriesWater.SE_DinoSpawnEntriesWater_C.ExecuteUbergraph_SE_DinoSpawnEntriesWater");

	USE_DinoSpawnEntriesWater_C_ExecuteUbergraph_SE_DinoSpawnEntriesWater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
