// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesQuetz_EX_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesQuetz_EX.DinoSpawnEntriesQuetz_EX_C.ExecuteUbergraph_DinoSpawnEntriesQuetz_EX
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesQuetz_EX_C::ExecuteUbergraph_DinoSpawnEntriesQuetz_EX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesQuetz_EX.DinoSpawnEntriesQuetz_EX_C.ExecuteUbergraph_DinoSpawnEntriesQuetz_EX");

	UDinoSpawnEntriesQuetz_EX_C_ExecuteUbergraph_DinoSpawnEntriesQuetz_EX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
