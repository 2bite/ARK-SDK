// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjGiantRock_Med_Boss_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjGiantRock_Med_Boss.ProjGiantRock_Med_Boss_C.UserConstructionScript
// ()

void AProjGiantRock_Med_Boss_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGiantRock_Med_Boss.ProjGiantRock_Med_Boss_C.UserConstructionScript");

	AProjGiantRock_Med_Boss_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGiantRock_Med_Boss.ProjGiantRock_Med_Boss_C.ExecuteUbergraph_ProjGiantRock_Med_Boss
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjGiantRock_Med_Boss_C::ExecuteUbergraph_ProjGiantRock_Med_Boss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGiantRock_Med_Boss.ProjGiantRock_Med_Boss_C.ExecuteUbergraph_ProjGiantRock_Med_Boss");

	AProjGiantRock_Med_Boss_C_ExecuteUbergraph_ProjGiantRock_Med_Boss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
