// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_Wasteland_Sulfur_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_Wasteland_Sulfur.DinoSpawnEntries_Wasteland_Sulfur_C.ExecuteUbergraph_DinoSpawnEntries_Wasteland_Sulfur
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_Wasteland_Sulfur_C::ExecuteUbergraph_DinoSpawnEntries_Wasteland_Sulfur(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_Wasteland_Sulfur.DinoSpawnEntries_Wasteland_Sulfur_C.ExecuteUbergraph_DinoSpawnEntries_Wasteland_Sulfur");

	UDinoSpawnEntries_Wasteland_Sulfur_C_ExecuteUbergraph_DinoSpawnEntries_Wasteland_Sulfur_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
