// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjGiantRock_EndBoss_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjGiantRock_EndBoss.ProjGiantRock_EndBoss_C.UserConstructionScript
// ()

void AProjGiantRock_EndBoss_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGiantRock_EndBoss.ProjGiantRock_EndBoss_C.UserConstructionScript");

	AProjGiantRock_EndBoss_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGiantRock_EndBoss.ProjGiantRock_EndBoss_C.ExecuteUbergraph_ProjGiantRock_EndBoss
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjGiantRock_EndBoss_C::ExecuteUbergraph_ProjGiantRock_EndBoss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGiantRock_EndBoss.ProjGiantRock_EndBoss_C.ExecuteUbergraph_ProjGiantRock_EndBoss");

	AProjGiantRock_EndBoss_C_ExecuteUbergraph_ProjGiantRock_EndBoss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
