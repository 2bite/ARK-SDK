// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesCaveTek_Easy_16_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesCaveTek_Easy_16.DinoSpawnEntriesCaveTek_Easy_15_C.ExecuteUbergraph_DinoSpawnEntriesCaveTek_Easy_16
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesCaveTek_Easy_15_C::ExecuteUbergraph_DinoSpawnEntriesCaveTek_Easy_16(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesCaveTek_Easy_16.DinoSpawnEntriesCaveTek_Easy_15_C.ExecuteUbergraph_DinoSpawnEntriesCaveTek_Easy_16");

	UDinoSpawnEntriesCaveTek_Easy_15_C_ExecuteUbergraph_DinoSpawnEntriesCaveTek_Easy_16_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif