// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossTeleporter_EndBoss_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BossTeleporter_EndBoss.BossTeleporter_EndBoss_C.UserConstructionScript
// ()

void ABossTeleporter_EndBoss_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossTeleporter_EndBoss.BossTeleporter_EndBoss_C.UserConstructionScript");

	ABossTeleporter_EndBoss_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossTeleporter_EndBoss.BossTeleporter_EndBoss_C.ExecuteUbergraph_BossTeleporter_EndBoss
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABossTeleporter_EndBoss_C::ExecuteUbergraph_BossTeleporter_EndBoss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossTeleporter_EndBoss.BossTeleporter_EndBoss_C.ExecuteUbergraph_BossTeleporter_EndBoss");

	ABossTeleporter_EndBoss_C_ExecuteUbergraph_BossTeleporter_EndBoss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
