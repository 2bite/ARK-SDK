// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IBossArenaActorControlInterface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IBossArenaActorControlInterface.IBossArenaActorControlInterface_C.ArenaShouldPreserveAtClose
// ()
// Parameters:
// class ABossArenaManager_C*     ArenaManager                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldPreserve                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIBossArenaActorControlInterface_C::ArenaShouldPreserveAtClose(class ABossArenaManager_C* ArenaManager, bool* ShouldPreserve)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBossArenaActorControlInterface.IBossArenaActorControlInterface_C.ArenaShouldPreserveAtClose");

	UIBossArenaActorControlInterface_C_ArenaShouldPreserveAtClose_Params params;
	params.ArenaManager = ArenaManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldPreserve != nullptr)
		*ShouldPreserve = params.ShouldPreserve;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
