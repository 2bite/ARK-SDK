// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesPenguins_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesPenguins.DinoSpawnEntriesPenguins_C.ExecuteUbergraph_DinoSpawnEntriesPenguins
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesPenguins_C::ExecuteUbergraph_DinoSpawnEntriesPenguins(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesPenguins.DinoSpawnEntriesPenguins_C.ExecuteUbergraph_DinoSpawnEntriesPenguins");

	UDinoSpawnEntriesPenguins_C_ExecuteUbergraph_DinoSpawnEntriesPenguins_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
