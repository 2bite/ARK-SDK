// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_Wasteland_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_Wasteland_Medium.DinoSpawnEntries_Wasteland_Medium_C.ExecuteUbergraph_DinoSpawnEntries_Wasteland_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_Wasteland_Medium_C::ExecuteUbergraph_DinoSpawnEntries_Wasteland_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_Wasteland_Medium.DinoSpawnEntries_Wasteland_Medium_C.ExecuteUbergraph_DinoSpawnEntries_Wasteland_Medium");

	UDinoSpawnEntries_Wasteland_Medium_C_ExecuteUbergraph_DinoSpawnEntries_Wasteland_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
