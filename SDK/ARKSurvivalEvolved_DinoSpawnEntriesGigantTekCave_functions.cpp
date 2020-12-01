// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesGigantTekCave_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesGigantTekCave.DinoSpawnEntriesGigantTekCave_C.ExecuteUbergraph_DinoSpawnEntriesGigantTekCave
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesGigantTekCave_C::ExecuteUbergraph_DinoSpawnEntriesGigantTekCave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesGigantTekCave.DinoSpawnEntriesGigantTekCave_C.ExecuteUbergraph_DinoSpawnEntriesGigantTekCave");

	UDinoSpawnEntriesGigantTekCave_C_ExecuteUbergraph_DinoSpawnEntriesGigantTekCave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
