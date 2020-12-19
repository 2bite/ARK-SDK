// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesTinyCave_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesTinyCave.DinoSpawnEntriesTinyCave_C.ExecuteUbergraph_DinoSpawnEntriesTinyCave
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesTinyCave_C::ExecuteUbergraph_DinoSpawnEntriesTinyCave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesTinyCave.DinoSpawnEntriesTinyCave_C.ExecuteUbergraph_DinoSpawnEntriesTinyCave");

	UDinoSpawnEntriesTinyCave_C_ExecuteUbergraph_DinoSpawnEntriesTinyCave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
