// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTekHelmetLaserImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTekHelmetLaserImpactEmitter.DinoTekHelmetLaserImpactEmitter_C.UserConstructionScript
// ()

void ADinoTekHelmetLaserImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTekHelmetLaserImpactEmitter.DinoTekHelmetLaserImpactEmitter_C.UserConstructionScript");

	ADinoTekHelmetLaserImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoTekHelmetLaserImpactEmitter.DinoTekHelmetLaserImpactEmitter_C.ExecuteUbergraph_DinoTekHelmetLaserImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADinoTekHelmetLaserImpactEmitter_C::ExecuteUbergraph_DinoTekHelmetLaserImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTekHelmetLaserImpactEmitter.DinoTekHelmetLaserImpactEmitter_C.ExecuteUbergraph_DinoTekHelmetLaserImpactEmitter");

	ADinoTekHelmetLaserImpactEmitter_C_ExecuteUbergraph_DinoTekHelmetLaserImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
