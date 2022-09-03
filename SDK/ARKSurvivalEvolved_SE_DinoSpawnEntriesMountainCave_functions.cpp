// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoSpawnEntriesMountainCave_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SE_DinoSpawnEntriesMountainCave.SE_DinoSpawnEntriesMountainCave_C.ExecuteUbergraph_SE_DinoSpawnEntriesMountainCave
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USE_DinoSpawnEntriesMountainCave_C::ExecuteUbergraph_SE_DinoSpawnEntriesMountainCave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SE_DinoSpawnEntriesMountainCave.SE_DinoSpawnEntriesMountainCave_C.ExecuteUbergraph_SE_DinoSpawnEntriesMountainCave");

	USE_DinoSpawnEntriesMountainCave_C_ExecuteUbergraph_SE_DinoSpawnEntriesMountainCave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
