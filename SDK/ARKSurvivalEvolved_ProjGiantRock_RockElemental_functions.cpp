// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjGiantRock_RockElemental_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjGiantRock_RockElemental.ProjGiantRock_RockElemental_C.UserConstructionScript
// ()

void AProjGiantRock_RockElemental_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGiantRock_RockElemental.ProjGiantRock_RockElemental_C.UserConstructionScript");

	AProjGiantRock_RockElemental_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGiantRock_RockElemental.ProjGiantRock_RockElemental_C.ExecuteUbergraph_ProjGiantRock_RockElemental
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjGiantRock_RockElemental_C::ExecuteUbergraph_ProjGiantRock_RockElemental(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGiantRock_RockElemental.ProjGiantRock_RockElemental_C.ExecuteUbergraph_ProjGiantRock_RockElemental");

	AProjGiantRock_RockElemental_C_ExecuteUbergraph_ProjGiantRock_RockElemental_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
