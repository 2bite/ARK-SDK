// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekTurretImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekTurretImpactEmitter.TekTurretImpactEmitter_C.UserConstructionScript
// ()

void ATekTurretImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTurretImpactEmitter.TekTurretImpactEmitter_C.UserConstructionScript");

	ATekTurretImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekTurretImpactEmitter.TekTurretImpactEmitter_C.ExecuteUbergraph_TekTurretImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekTurretImpactEmitter_C::ExecuteUbergraph_TekTurretImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTurretImpactEmitter.TekTurretImpactEmitter_C.ExecuteUbergraph_TekTurretImpactEmitter");

	ATekTurretImpactEmitter_C_ExecuteUbergraph_TekTurretImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
