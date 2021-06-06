// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesMegalania_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesMegalania.DinoSpawnEntriesMegalania_C.ExecuteUbergraph_DinoSpawnEntriesMegalania
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesMegalania_C::ExecuteUbergraph_DinoSpawnEntriesMegalania(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesMegalania.DinoSpawnEntriesMegalania_C.ExecuteUbergraph_DinoSpawnEntriesMegalania");

	UDinoSpawnEntriesMegalania_C_ExecuteUbergraph_DinoSpawnEntriesMegalania_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
