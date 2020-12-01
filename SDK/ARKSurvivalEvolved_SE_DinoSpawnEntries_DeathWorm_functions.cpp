// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoSpawnEntries_DeathWorm_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SE_DinoSpawnEntries_DeathWorm.SE_DinoSpawnEntries_DeathWorm_C.ExecuteUbergraph_SE_DinoSpawnEntries_DeathWorm
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USE_DinoSpawnEntries_DeathWorm_C::ExecuteUbergraph_SE_DinoSpawnEntries_DeathWorm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SE_DinoSpawnEntries_DeathWorm.SE_DinoSpawnEntries_DeathWorm_C.ExecuteUbergraph_SE_DinoSpawnEntries_DeathWorm");

	USE_DinoSpawnEntries_DeathWorm_C_ExecuteUbergraph_SE_DinoSpawnEntries_DeathWorm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
