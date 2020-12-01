// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GiantRockImpactBreakEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GiantRockImpactBreakEmitter.GiantRockImpactBreakEmitter_C.UserConstructionScript
// ()

void AGiantRockImpactBreakEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantRockImpactBreakEmitter.GiantRockImpactBreakEmitter_C.UserConstructionScript");

	AGiantRockImpactBreakEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantRockImpactBreakEmitter.GiantRockImpactBreakEmitter_C.ExecuteUbergraph_GiantRockImpactBreakEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGiantRockImpactBreakEmitter_C::ExecuteUbergraph_GiantRockImpactBreakEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantRockImpactBreakEmitter.GiantRockImpactBreakEmitter_C.ExecuteUbergraph_GiantRockImpactBreakEmitter");

	AGiantRockImpactBreakEmitter_C_ExecuteUbergraph_GiantRockImpactBreakEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
