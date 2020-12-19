// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_DungeonEntrance_TekCave_Hard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_DungeonEntrance_TekCave_Hard.PrimalItem_DungeonEntrance_TekCave_Hard_C.ExecuteUbergraph_PrimalItem_DungeonEntrance_TekCave_Hard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_DungeonEntrance_TekCave_Hard_C::ExecuteUbergraph_PrimalItem_DungeonEntrance_TekCave_Hard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_DungeonEntrance_TekCave_Hard.PrimalItem_DungeonEntrance_TekCave_Hard_C.ExecuteUbergraph_PrimalItem_DungeonEntrance_TekCave_Hard");

	UPrimalItem_DungeonEntrance_TekCave_Hard_C_ExecuteUbergraph_PrimalItem_DungeonEntrance_TekCave_Hard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
