// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesCaveMegalo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesCaveMegalo.DinoSpawnEntriesCaveMegalo_C.ExecuteUbergraph_DinoSpawnEntriesCaveMegalo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesCaveMegalo_C::ExecuteUbergraph_DinoSpawnEntriesCaveMegalo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesCaveMegalo.DinoSpawnEntriesCaveMegalo_C.ExecuteUbergraph_DinoSpawnEntriesCaveMegalo");

	UDinoSpawnEntriesCaveMegalo_C_ExecuteUbergraph_DinoSpawnEntriesCaveMegalo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
