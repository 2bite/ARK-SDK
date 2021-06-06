// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_Beavers_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_Beavers.DinoSpawnEntries_Beavers_C.ExecuteUbergraph_DinoSpawnEntries_Beavers
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_Beavers_C::ExecuteUbergraph_DinoSpawnEntries_Beavers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_Beavers.DinoSpawnEntries_Beavers_C.ExecuteUbergraph_DinoSpawnEntries_Beavers");

	UDinoSpawnEntries_Beavers_C_ExecuteUbergraph_DinoSpawnEntries_Beavers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
