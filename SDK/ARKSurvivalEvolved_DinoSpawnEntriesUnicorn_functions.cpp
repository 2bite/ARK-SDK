// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesUnicorn_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesUnicorn.DinoSpawnEntriesUnicorn_C.ExecuteUbergraph_DinoSpawnEntriesUnicorn
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesUnicorn_C::ExecuteUbergraph_DinoSpawnEntriesUnicorn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesUnicorn.DinoSpawnEntriesUnicorn_C.ExecuteUbergraph_DinoSpawnEntriesUnicorn");

	UDinoSpawnEntriesUnicorn_C_ExecuteUbergraph_DinoSpawnEntriesUnicorn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
