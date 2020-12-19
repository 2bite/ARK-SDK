// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RockGolem_TheIslandDisguise_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RockGolem_TheIslandDisguise.RockGolem_TheIslandDisguise_C.UserConstructionScript
// ()

void ARockGolem_TheIslandDisguise_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockGolem_TheIslandDisguise.RockGolem_TheIslandDisguise_C.UserConstructionScript");

	ARockGolem_TheIslandDisguise_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockGolem_TheIslandDisguise.RockGolem_TheIslandDisguise_C.ExecuteUbergraph_RockGolem_TheIslandDisguise
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARockGolem_TheIslandDisguise_C::ExecuteUbergraph_RockGolem_TheIslandDisguise(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockGolem_TheIslandDisguise.RockGolem_TheIslandDisguise_C.ExecuteUbergraph_RockGolem_TheIslandDisguise");

	ARockGolem_TheIslandDisguise_C_ExecuteUbergraph_RockGolem_TheIslandDisguise_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
