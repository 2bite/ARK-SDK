// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesUnderwaterGround_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesUnderwaterGround.DinoSpawnEntriesUnderwaterGround_C.ExecuteUbergraph_DinoSpawnEntriesUnderwaterGround
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesUnderwaterGround_C::ExecuteUbergraph_DinoSpawnEntriesUnderwaterGround(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesUnderwaterGround.DinoSpawnEntriesUnderwaterGround_C.ExecuteUbergraph_DinoSpawnEntriesUnderwaterGround");

	UDinoSpawnEntriesUnderwaterGround_C_ExecuteUbergraph_DinoSpawnEntriesUnderwaterGround_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
