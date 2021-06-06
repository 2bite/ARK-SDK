// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesCaveTek_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesCaveTek_Medium.DinoSpawnEntriesCaveTek_Medium_C.ExecuteUbergraph_DinoSpawnEntriesCaveTek_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesCaveTek_Medium_C::ExecuteUbergraph_DinoSpawnEntriesCaveTek_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesCaveTek_Medium.DinoSpawnEntriesCaveTek_Medium_C.ExecuteUbergraph_DinoSpawnEntriesCaveTek_Medium");

	UDinoSpawnEntriesCaveTek_Medium_C_ExecuteUbergraph_DinoSpawnEntriesCaveTek_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
