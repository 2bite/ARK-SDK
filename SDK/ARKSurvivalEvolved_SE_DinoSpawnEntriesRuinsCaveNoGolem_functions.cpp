// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoSpawnEntriesRuinsCaveNoGolem_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SE_DinoSpawnEntriesRuinsCaveNoGolem.SE_DinoSpawnEntriesRuinsCaveNoGolem_C.ExecuteUbergraph_SE_DinoSpawnEntriesRuinsCaveNoGolem
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USE_DinoSpawnEntriesRuinsCaveNoGolem_C::ExecuteUbergraph_SE_DinoSpawnEntriesRuinsCaveNoGolem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SE_DinoSpawnEntriesRuinsCaveNoGolem.SE_DinoSpawnEntriesRuinsCaveNoGolem_C.ExecuteUbergraph_SE_DinoSpawnEntriesRuinsCaveNoGolem");

	USE_DinoSpawnEntriesRuinsCaveNoGolem_C_ExecuteUbergraph_SE_DinoSpawnEntriesRuinsCaveNoGolem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
