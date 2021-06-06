// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesCaveTek_Hard_16_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesCaveTek_Hard_16.DinoSpawnEntriesCaveTek_Hard_15_C.ExecuteUbergraph_DinoSpawnEntriesCaveTek_Hard_16
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesCaveTek_Hard_15_C::ExecuteUbergraph_DinoSpawnEntriesCaveTek_Hard_16(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesCaveTek_Hard_16.DinoSpawnEntriesCaveTek_Hard_15_C.ExecuteUbergraph_DinoSpawnEntriesCaveTek_Hard_16");

	UDinoSpawnEntriesCaveTek_Hard_15_C_ExecuteUbergraph_DinoSpawnEntriesCaveTek_Hard_16_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
