// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_Wasteland_South_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_Wasteland_South.DinoSpawnEntries_Wasteland_South_C.ExecuteUbergraph_DinoSpawnEntries_Wasteland_South
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_Wasteland_South_C::ExecuteUbergraph_DinoSpawnEntries_Wasteland_South(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_Wasteland_South.DinoSpawnEntries_Wasteland_South_C.ExecuteUbergraph_DinoSpawnEntries_Wasteland_South");

	UDinoSpawnEntries_Wasteland_South_C_ExecuteUbergraph_DinoSpawnEntries_Wasteland_South_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
