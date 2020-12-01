// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjEndbossFireBall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjEndbossFireBall.ProjEndBossFireBall_C.UserConstructionScript
// ()

void AProjEndBossFireBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjEndbossFireBall.ProjEndBossFireBall_C.UserConstructionScript");

	AProjEndBossFireBall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjEndbossFireBall.ProjEndBossFireBall_C.ExecuteUbergraph_ProjEndBossFireBall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjEndBossFireBall_C::ExecuteUbergraph_ProjEndBossFireBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjEndbossFireBall.ProjEndBossFireBall_C.ExecuteUbergraph_ProjEndBossFireBall");

	AProjEndBossFireBall_C_ExecuteUbergraph_ProjEndBossFireBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
