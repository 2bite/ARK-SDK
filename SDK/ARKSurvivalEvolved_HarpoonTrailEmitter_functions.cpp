// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HarpoonTrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HarpoonTrailEmitter.HarpoonTrailEmitter_C.UserConstructionScript
// ()

void AHarpoonTrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HarpoonTrailEmitter.HarpoonTrailEmitter_C.UserConstructionScript");

	AHarpoonTrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HarpoonTrailEmitter.HarpoonTrailEmitter_C.ExecuteUbergraph_HarpoonTrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AHarpoonTrailEmitter_C::ExecuteUbergraph_HarpoonTrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HarpoonTrailEmitter.HarpoonTrailEmitter_C.ExecuteUbergraph_HarpoonTrailEmitter");

	AHarpoonTrailEmitter_C_ExecuteUbergraph_HarpoonTrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
