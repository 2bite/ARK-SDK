// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesCave5_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesCave5.DinoSpawnEntriesCave5_C.ExecuteUbergraph_DinoSpawnEntriesCave5
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesCave5_C::ExecuteUbergraph_DinoSpawnEntriesCave5(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesCave5.DinoSpawnEntriesCave5_C.ExecuteUbergraph_DinoSpawnEntriesCave5");

	UDinoSpawnEntriesCave5_C_ExecuteUbergraph_DinoSpawnEntriesCave5_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
