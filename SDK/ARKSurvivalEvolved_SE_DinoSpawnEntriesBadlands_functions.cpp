// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoSpawnEntriesBadlands_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SE_DinoSpawnEntriesBadlands.SE_DinoSpawnEntriesBadlands_C.ExecuteUbergraph_SE_DinoSpawnEntriesBadlands
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USE_DinoSpawnEntriesBadlands_C::ExecuteUbergraph_SE_DinoSpawnEntriesBadlands(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SE_DinoSpawnEntriesBadlands.SE_DinoSpawnEntriesBadlands_C.ExecuteUbergraph_SE_DinoSpawnEntriesBadlands");

	USE_DinoSpawnEntriesBadlands_C_ExecuteUbergraph_SE_DinoSpawnEntriesBadlands_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
