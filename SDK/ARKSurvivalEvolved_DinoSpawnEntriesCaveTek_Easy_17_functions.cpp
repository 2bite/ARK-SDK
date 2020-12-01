// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesCaveTek_Easy_17_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesCaveTek_Easy_17.DinoSpawnEntriesCaveTek_Easy_16_C.ExecuteUbergraph_DinoSpawnEntriesCaveTek_Easy_17
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesCaveTek_Easy_16_C::ExecuteUbergraph_DinoSpawnEntriesCaveTek_Easy_17(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesCaveTek_Easy_17.DinoSpawnEntriesCaveTek_Easy_16_C.ExecuteUbergraph_DinoSpawnEntriesCaveTek_Easy_17");

	UDinoSpawnEntriesCaveTek_Easy_16_C_ExecuteUbergraph_DinoSpawnEntriesCaveTek_Easy_17_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
