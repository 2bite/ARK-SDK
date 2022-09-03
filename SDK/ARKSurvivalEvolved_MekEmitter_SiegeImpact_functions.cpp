// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MekEmitter_SiegeImpact_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MekEmitter_SiegeImpact.MekEmitter_SiegeImpact_C.UserConstructionScript
// ()

void AMekEmitter_SiegeImpact_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MekEmitter_SiegeImpact.MekEmitter_SiegeImpact_C.UserConstructionScript");

	AMekEmitter_SiegeImpact_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MekEmitter_SiegeImpact.MekEmitter_SiegeImpact_C.ExecuteUbergraph_MekEmitter_SiegeImpact
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMekEmitter_SiegeImpact_C::ExecuteUbergraph_MekEmitter_SiegeImpact(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MekEmitter_SiegeImpact.MekEmitter_SiegeImpact_C.ExecuteUbergraph_MekEmitter_SiegeImpact");

	AMekEmitter_SiegeImpact_C_ExecuteUbergraph_MekEmitter_SiegeImpact_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
