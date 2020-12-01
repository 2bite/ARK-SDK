// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GrapHookImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GrapHookImpactEmitter.GrapHookImpactEmitter_C.UserConstructionScript
// ()

void AGrapHookImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrapHookImpactEmitter.GrapHookImpactEmitter_C.UserConstructionScript");

	AGrapHookImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrapHookImpactEmitter.GrapHookImpactEmitter_C.ExecuteUbergraph_GrapHookImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGrapHookImpactEmitter_C::ExecuteUbergraph_GrapHookImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrapHookImpactEmitter.GrapHookImpactEmitter_C.ExecuteUbergraph_GrapHookImpactEmitter");

	AGrapHookImpactEmitter_C_ExecuteUbergraph_GrapHookImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
