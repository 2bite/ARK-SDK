// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesJungle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesJungle.DinoSpawnEntriesJungle_C.ExecuteUbergraph_DinoSpawnEntriesJungle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesJungle_C::ExecuteUbergraph_DinoSpawnEntriesJungle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesJungle.DinoSpawnEntriesJungle_C.ExecuteUbergraph_DinoSpawnEntriesJungle");

	UDinoSpawnEntriesJungle_C_ExecuteUbergraph_DinoSpawnEntriesJungle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
