// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceDolphinChargedLaserImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpaceDolphinChargedLaserImpactEmitter.SpaceDolphinChargedLaserImpactEmitter_C.UserConstructionScript
// ()

void ASpaceDolphinChargedLaserImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphinChargedLaserImpactEmitter.SpaceDolphinChargedLaserImpactEmitter_C.UserConstructionScript");

	ASpaceDolphinChargedLaserImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphinChargedLaserImpactEmitter.SpaceDolphinChargedLaserImpactEmitter_C.ExecuteUbergraph_SpaceDolphinChargedLaserImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphinChargedLaserImpactEmitter_C::ExecuteUbergraph_SpaceDolphinChargedLaserImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphinChargedLaserImpactEmitter.SpaceDolphinChargedLaserImpactEmitter_C.ExecuteUbergraph_SpaceDolphinChargedLaserImpactEmitter");

	ASpaceDolphinChargedLaserImpactEmitter_C_ExecuteUbergraph_SpaceDolphinChargedLaserImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
