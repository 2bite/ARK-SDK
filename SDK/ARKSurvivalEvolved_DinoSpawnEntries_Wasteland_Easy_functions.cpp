// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_Wasteland_Easy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_Wasteland_Easy.DinoSpawnEntries_Wasteland_Easy_C.ExecuteUbergraph_DinoSpawnEntries_Wasteland_Easy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_Wasteland_Easy_C::ExecuteUbergraph_DinoSpawnEntries_Wasteland_Easy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_Wasteland_Easy.DinoSpawnEntries_Wasteland_Easy_C.ExecuteUbergraph_DinoSpawnEntries_Wasteland_Easy");

	UDinoSpawnEntries_Wasteland_Easy_C_ExecuteUbergraph_DinoSpawnEntries_Wasteland_Easy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif