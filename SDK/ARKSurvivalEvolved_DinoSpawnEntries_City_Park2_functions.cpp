// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_City_Park2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_City_Park2.DinoSpawnEntries_City_Park2_C.ExecuteUbergraph_DinoSpawnEntries_City_Park2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_City_Park2_C::ExecuteUbergraph_DinoSpawnEntries_City_Park2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_City_Park2.DinoSpawnEntries_City_Park2_C.ExecuteUbergraph_DinoSpawnEntries_City_Park2");

	UDinoSpawnEntries_City_Park2_C_ExecuteUbergraph_DinoSpawnEntries_City_Park2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
