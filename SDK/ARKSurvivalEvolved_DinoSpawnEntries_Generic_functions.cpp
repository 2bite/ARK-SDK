// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_Generic_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_Generic.DinoSpawnEntries_Generic_C.ExecuteUbergraph_DinoSpawnEntries_Generic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_Generic_C::ExecuteUbergraph_DinoSpawnEntries_Generic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_Generic.DinoSpawnEntries_Generic_C.ExecuteUbergraph_DinoSpawnEntries_Generic");

	UDinoSpawnEntries_Generic_C_ExecuteUbergraph_DinoSpawnEntries_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
