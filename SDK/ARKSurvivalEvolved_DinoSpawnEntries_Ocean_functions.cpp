// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_Ocean_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_Ocean.DinoSpawnEntries_Ocean_C.ExecuteUbergraph_DinoSpawnEntries_Ocean
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_Ocean_C::ExecuteUbergraph_DinoSpawnEntries_Ocean(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_Ocean.DinoSpawnEntries_Ocean_C.ExecuteUbergraph_DinoSpawnEntries_Ocean");

	UDinoSpawnEntries_Ocean_C_ExecuteUbergraph_DinoSpawnEntries_Ocean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
