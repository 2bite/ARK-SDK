// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_City_Trench_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_City_Trench.DinoSpawnEntries_City_Trench_C.ExecuteUbergraph_DinoSpawnEntries_City_Trench
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_City_Trench_C::ExecuteUbergraph_DinoSpawnEntries_City_Trench(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_City_Trench.DinoSpawnEntries_City_Trench_C.ExecuteUbergraph_DinoSpawnEntries_City_Trench");

	UDinoSpawnEntries_City_Trench_C_ExecuteUbergraph_DinoSpawnEntries_City_Trench_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
