// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RockGolem_ScorchedEarth_Disguise_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RockGolem_ScorchedEarth_Disguise.RockGolem_ScorchedEarth_Disguise_C.UserConstructionScript
// ()

void ARockGolem_ScorchedEarth_Disguise_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockGolem_ScorchedEarth_Disguise.RockGolem_ScorchedEarth_Disguise_C.UserConstructionScript");

	ARockGolem_ScorchedEarth_Disguise_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockGolem_ScorchedEarth_Disguise.RockGolem_ScorchedEarth_Disguise_C.ExecuteUbergraph_RockGolem_ScorchedEarth_Disguise
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARockGolem_ScorchedEarth_Disguise_C::ExecuteUbergraph_RockGolem_ScorchedEarth_Disguise(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockGolem_ScorchedEarth_Disguise.RockGolem_ScorchedEarth_Disguise_C.ExecuteUbergraph_RockGolem_ScorchedEarth_Disguise");

	ARockGolem_ScorchedEarth_Disguise_C_ExecuteUbergraph_RockGolem_ScorchedEarth_Disguise_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
