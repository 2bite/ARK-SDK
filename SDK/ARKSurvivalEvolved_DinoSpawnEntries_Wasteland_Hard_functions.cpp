// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_Wasteland_Hard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_Wasteland_Hard.DinoSpawnEntries_Wasteland_Hard_C.ExecuteUbergraph_DinoSpawnEntries_Wasteland_Hard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_Wasteland_Hard_C::ExecuteUbergraph_DinoSpawnEntries_Wasteland_Hard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_Wasteland_Hard.DinoSpawnEntries_Wasteland_Hard_C.ExecuteUbergraph_DinoSpawnEntries_Wasteland_Hard");

	UDinoSpawnEntries_Wasteland_Hard_C_ExecuteUbergraph_DinoSpawnEntries_Wasteland_Hard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
