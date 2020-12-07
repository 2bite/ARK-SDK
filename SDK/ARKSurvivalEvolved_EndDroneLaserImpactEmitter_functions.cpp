// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndDroneLaserImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndDroneLaserImpactEmitter.EndDroneLaserImpactEmitter_C.UserConstructionScript
// ()

void AEndDroneLaserImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDroneLaserImpactEmitter.EndDroneLaserImpactEmitter_C.UserConstructionScript");

	AEndDroneLaserImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndDroneLaserImpactEmitter.EndDroneLaserImpactEmitter_C.ExecuteUbergraph_EndDroneLaserImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndDroneLaserImpactEmitter_C::ExecuteUbergraph_EndDroneLaserImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDroneLaserImpactEmitter.EndDroneLaserImpactEmitter_C.ExecuteUbergraph_EndDroneLaserImpactEmitter");

	AEndDroneLaserImpactEmitter_C_ExecuteUbergraph_EndDroneLaserImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
