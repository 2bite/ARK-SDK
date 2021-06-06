// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesIceCave_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesIceCave.DinoSpawnEntriesIceCave_C.ExecuteUbergraph_DinoSpawnEntriesIceCave
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesIceCave_C::ExecuteUbergraph_DinoSpawnEntriesIceCave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesIceCave.DinoSpawnEntriesIceCave_C.ExecuteUbergraph_DinoSpawnEntriesIceCave");

	UDinoSpawnEntriesIceCave_C_ExecuteUbergraph_DinoSpawnEntriesIceCave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
