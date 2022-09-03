// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IBossArenaBuffControlInterface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IBossArenaBuffControlInterface.IBossArenaBuffControlInterface_C.BossArenaEnableBuff
// ()

void UIBossArenaBuffControlInterface_C::BossArenaEnableBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function IBossArenaBuffControlInterface.IBossArenaBuffControlInterface_C.BossArenaEnableBuff");

	UIBossArenaBuffControlInterface_C_BossArenaEnableBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBossArenaBuffControlInterface.IBossArenaBuffControlInterface_C.BossArenaDisableBuff
// ()

void UIBossArenaBuffControlInterface_C::BossArenaDisableBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function IBossArenaBuffControlInterface.IBossArenaBuffControlInterface_C.BossArenaDisableBuff");

	UIBossArenaBuffControlInterface_C_BossArenaDisableBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
