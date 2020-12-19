// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_DungeonEntrance_TekCave_Easy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_DungeonEntrance_TekCave_Easy.PrimalItem_DungeonEntrance_TekCave_Easy_C.ExecuteUbergraph_PrimalItem_DungeonEntrance_TekCave_Easy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_DungeonEntrance_TekCave_Easy_C::ExecuteUbergraph_PrimalItem_DungeonEntrance_TekCave_Easy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_DungeonEntrance_TekCave_Easy.PrimalItem_DungeonEntrance_TekCave_Easy_C.ExecuteUbergraph_PrimalItem_DungeonEntrance_TekCave_Easy");

	UPrimalItem_DungeonEntrance_TekCave_Easy_C_ExecuteUbergraph_PrimalItem_DungeonEntrance_TekCave_Easy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
