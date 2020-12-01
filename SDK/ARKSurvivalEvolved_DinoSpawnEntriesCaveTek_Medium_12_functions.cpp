// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesCaveTek_Medium_12_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesCaveTek_Medium_12.DinoSpawnEntriesCaveTek_Medium_11_C.ExecuteUbergraph_DinoSpawnEntriesCaveTek_Medium_12
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesCaveTek_Medium_11_C::ExecuteUbergraph_DinoSpawnEntriesCaveTek_Medium_12(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesCaveTek_Medium_12.DinoSpawnEntriesCaveTek_Medium_11_C.ExecuteUbergraph_DinoSpawnEntriesCaveTek_Medium_12");

	UDinoSpawnEntriesCaveTek_Medium_11_C_ExecuteUbergraph_DinoSpawnEntriesCaveTek_Medium_12_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
