// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_BossDragon_Easy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDropInventoryComponent_BossDragon_Easy.DinoDropInventoryComponent_BossDragon_Easy_C.ExecuteUbergraph_DinoDropInventoryComponent_BossDragon_Easy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDropInventoryComponent_BossDragon_Easy_C::ExecuteUbergraph_DinoDropInventoryComponent_BossDragon_Easy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDropInventoryComponent_BossDragon_Easy.DinoDropInventoryComponent_BossDragon_Easy_C.ExecuteUbergraph_DinoDropInventoryComponent_BossDragon_Easy");

	UDinoDropInventoryComponent_BossDragon_Easy_C_ExecuteUbergraph_DinoDropInventoryComponent_BossDragon_Easy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
