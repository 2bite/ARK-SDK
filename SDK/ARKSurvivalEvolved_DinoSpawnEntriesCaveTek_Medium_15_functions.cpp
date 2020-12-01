// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesCaveTek_Medium_15_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesCaveTek_Medium_15.DinoSpawnEntriesCaveTek_Medium_14_C.ExecuteUbergraph_DinoSpawnEntriesCaveTek_Medium_15
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesCaveTek_Medium_14_C::ExecuteUbergraph_DinoSpawnEntriesCaveTek_Medium_15(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesCaveTek_Medium_15.DinoSpawnEntriesCaveTek_Medium_14_C.ExecuteUbergraph_DinoSpawnEntriesCaveTek_Medium_15");

	UDinoSpawnEntriesCaveTek_Medium_14_C_ExecuteUbergraph_DinoSpawnEntriesCaveTek_Medium_15_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
