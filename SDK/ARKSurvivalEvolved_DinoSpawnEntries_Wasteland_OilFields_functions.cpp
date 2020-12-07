// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_Wasteland_OilFields_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_Wasteland_OilFields.DinoSpawnEntries_Wasteland_OilFields_C.ExecuteUbergraph_DinoSpawnEntries_Wasteland_OilFields
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_Wasteland_OilFields_C::ExecuteUbergraph_DinoSpawnEntries_Wasteland_OilFields(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_Wasteland_OilFields.DinoSpawnEntries_Wasteland_OilFields_C.ExecuteUbergraph_DinoSpawnEntries_Wasteland_OilFields");

	UDinoSpawnEntries_Wasteland_OilFields_C_ExecuteUbergraph_DinoSpawnEntries_Wasteland_OilFields_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
