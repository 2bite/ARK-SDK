// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoSpawnEntriesGreenDesert_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SE_DinoSpawnEntriesGreenDesert.SE_DinoSpawnEntriesGreenDesert_C.ExecuteUbergraph_SE_DinoSpawnEntriesGreenDesert
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USE_DinoSpawnEntriesGreenDesert_C::ExecuteUbergraph_SE_DinoSpawnEntriesGreenDesert(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SE_DinoSpawnEntriesGreenDesert.SE_DinoSpawnEntriesGreenDesert_C.ExecuteUbergraph_SE_DinoSpawnEntriesGreenDesert");

	USE_DinoSpawnEntriesGreenDesert_C_ExecuteUbergraph_SE_DinoSpawnEntriesGreenDesert_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
