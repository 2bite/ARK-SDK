// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RockGolem_RockEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RockGolem_RockEmitter.RockGolem_RockEmitter_C.UserConstructionScript
// ()

void ARockGolem_RockEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockGolem_RockEmitter.RockGolem_RockEmitter_C.UserConstructionScript");

	ARockGolem_RockEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockGolem_RockEmitter.RockGolem_RockEmitter_C.ExecuteUbergraph_RockGolem_RockEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARockGolem_RockEmitter_C::ExecuteUbergraph_RockGolem_RockEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockGolem_RockEmitter.RockGolem_RockEmitter_C.ExecuteUbergraph_RockGolem_RockEmitter");

	ARockGolem_RockEmitter_C_ExecuteUbergraph_RockGolem_RockEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
