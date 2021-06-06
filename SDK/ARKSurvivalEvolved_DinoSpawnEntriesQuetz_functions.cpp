// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesQuetz_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesQuetz.DinoSpawnEntriesQuetz_C.ExecuteUbergraph_DinoSpawnEntriesQuetz
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesQuetz_C::ExecuteUbergraph_DinoSpawnEntriesQuetz(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesQuetz.DinoSpawnEntriesQuetz_C.ExecuteUbergraph_DinoSpawnEntriesQuetz");

	UDinoSpawnEntriesQuetz_C_ExecuteUbergraph_DinoSpawnEntriesQuetz_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
