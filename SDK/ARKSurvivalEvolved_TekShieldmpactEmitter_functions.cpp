// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekShieldmpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekShieldmpactEmitter.TekShieldmpactEmitter_C.UserConstructionScript
// ()

void ATekShieldmpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekShieldmpactEmitter.TekShieldmpactEmitter_C.UserConstructionScript");

	ATekShieldmpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekShieldmpactEmitter.TekShieldmpactEmitter_C.ExecuteUbergraph_TekShieldmpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekShieldmpactEmitter_C::ExecuteUbergraph_TekShieldmpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekShieldmpactEmitter.TekShieldmpactEmitter_C.ExecuteUbergraph_TekShieldmpactEmitter");

	ATekShieldmpactEmitter_C_ExecuteUbergraph_TekShieldmpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
