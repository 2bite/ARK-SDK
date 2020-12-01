// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekArmorShieldImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekArmorShieldImpactEmitter.TekArmorShieldImpactEmitter_C.UserConstructionScript
// ()

void ATekArmorShieldImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekArmorShieldImpactEmitter.TekArmorShieldImpactEmitter_C.UserConstructionScript");

	ATekArmorShieldImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekArmorShieldImpactEmitter.TekArmorShieldImpactEmitter_C.ExecuteUbergraph_TekArmorShieldImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekArmorShieldImpactEmitter_C::ExecuteUbergraph_TekArmorShieldImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekArmorShieldImpactEmitter.TekArmorShieldImpactEmitter_C.ExecuteUbergraph_TekArmorShieldImpactEmitter");

	ATekArmorShieldImpactEmitter_C_ExecuteUbergraph_TekArmorShieldImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
