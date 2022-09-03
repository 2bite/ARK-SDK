// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoSpawnEntriesDunes_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SE_DinoSpawnEntriesDunes.SE_DinoSpawnEntriesDunes_C.ExecuteUbergraph_SE_DinoSpawnEntriesDunes
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USE_DinoSpawnEntriesDunes_C::ExecuteUbergraph_SE_DinoSpawnEntriesDunes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SE_DinoSpawnEntriesDunes.SE_DinoSpawnEntriesDunes_C.ExecuteUbergraph_SE_DinoSpawnEntriesDunes");

	USE_DinoSpawnEntriesDunes_C_ExecuteUbergraph_SE_DinoSpawnEntriesDunes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
