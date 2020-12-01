// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_Wasteland_ForbiddenZone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_Wasteland_ForbiddenZone.DinoSpawnEntries_Wasteland_ForbiddenZone_C.ExecuteUbergraph_DinoSpawnEntries_Wasteland_ForbiddenZone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_Wasteland_ForbiddenZone_C::ExecuteUbergraph_DinoSpawnEntries_Wasteland_ForbiddenZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_Wasteland_ForbiddenZone.DinoSpawnEntries_Wasteland_ForbiddenZone_C.ExecuteUbergraph_DinoSpawnEntries_Wasteland_ForbiddenZone");

	UDinoSpawnEntries_Wasteland_ForbiddenZone_C_ExecuteUbergraph_DinoSpawnEntries_Wasteland_ForbiddenZone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
