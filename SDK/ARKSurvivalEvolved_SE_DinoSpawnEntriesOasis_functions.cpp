// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoSpawnEntriesOasis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SE_DinoSpawnEntriesOasis.SE_DinoSpawnEntriesOasis_C.ExecuteUbergraph_SE_DinoSpawnEntriesOasis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USE_DinoSpawnEntriesOasis_C::ExecuteUbergraph_SE_DinoSpawnEntriesOasis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SE_DinoSpawnEntriesOasis.SE_DinoSpawnEntriesOasis_C.ExecuteUbergraph_SE_DinoSpawnEntriesOasis");

	USE_DinoSpawnEntriesOasis_C_ExecuteUbergraph_SE_DinoSpawnEntriesOasis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
