// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_EndBossMinion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDropInventoryComponent_EndBossMinion.DinoDropInventoryComponent_EndBossMinion_C.ExecuteUbergraph_DinoDropInventoryComponent_EndBossMinion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDropInventoryComponent_EndBossMinion_C::ExecuteUbergraph_DinoDropInventoryComponent_EndBossMinion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDropInventoryComponent_EndBossMinion.DinoDropInventoryComponent_EndBossMinion_C.ExecuteUbergraph_DinoDropInventoryComponent_EndBossMinion");

	UDinoDropInventoryComponent_EndBossMinion_C_ExecuteUbergraph_DinoDropInventoryComponent_EndBossMinion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
