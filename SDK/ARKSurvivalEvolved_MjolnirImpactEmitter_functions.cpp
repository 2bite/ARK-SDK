// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MjolnirImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MjolnirImpactEmitter.MjolnirImpactEmitter_C.UserConstructionScript
// ()

void AMjolnirImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MjolnirImpactEmitter.MjolnirImpactEmitter_C.UserConstructionScript");

	AMjolnirImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MjolnirImpactEmitter.MjolnirImpactEmitter_C.ExecuteUbergraph_MjolnirImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMjolnirImpactEmitter_C::ExecuteUbergraph_MjolnirImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MjolnirImpactEmitter.MjolnirImpactEmitter_C.ExecuteUbergraph_MjolnirImpactEmitter");

	AMjolnirImpactEmitter_C_ExecuteUbergraph_MjolnirImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
