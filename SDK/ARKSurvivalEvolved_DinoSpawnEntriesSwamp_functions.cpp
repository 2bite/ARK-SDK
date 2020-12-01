// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesSwamp_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesSwamp.DinoSpawnEntriesSwamp_C.ExecuteUbergraph_DinoSpawnEntriesSwamp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesSwamp_C::ExecuteUbergraph_DinoSpawnEntriesSwamp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesSwamp.DinoSpawnEntriesSwamp_C.ExecuteUbergraph_DinoSpawnEntriesSwamp");

	UDinoSpawnEntriesSwamp_C_ExecuteUbergraph_DinoSpawnEntriesSwamp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
