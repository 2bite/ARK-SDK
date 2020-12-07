// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesCaveTek_Easy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesCaveTek_Easy.DinoSpawnEntriesCaveTek_Easy_C.ExecuteUbergraph_DinoSpawnEntriesCaveTek_Easy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesCaveTek_Easy_C::ExecuteUbergraph_DinoSpawnEntriesCaveTek_Easy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesCaveTek_Easy.DinoSpawnEntriesCaveTek_Easy_C.ExecuteUbergraph_DinoSpawnEntriesCaveTek_Easy");

	UDinoSpawnEntriesCaveTek_Easy_C_ExecuteUbergraph_DinoSpawnEntriesCaveTek_Easy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
