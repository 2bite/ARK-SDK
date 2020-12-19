// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoSpawnEntriesWyvernTrench_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SE_DinoSpawnEntriesWyvernTrench.SE_DinoSpawnEntriesWyvernTrench_C.ExecuteUbergraph_SE_DinoSpawnEntriesWyvernTrench
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USE_DinoSpawnEntriesWyvernTrench_C::ExecuteUbergraph_SE_DinoSpawnEntriesWyvernTrench(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SE_DinoSpawnEntriesWyvernTrench.SE_DinoSpawnEntriesWyvernTrench_C.ExecuteUbergraph_SE_DinoSpawnEntriesWyvernTrench");

	USE_DinoSpawnEntriesWyvernTrench_C_ExecuteUbergraph_SE_DinoSpawnEntriesWyvernTrench_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
