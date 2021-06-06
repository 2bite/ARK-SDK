// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjMek_ImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjMek_ImpactEmitter.ProjMek_ImpactEmitter_C.UserConstructionScript
// ()

void AProjMek_ImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMek_ImpactEmitter.ProjMek_ImpactEmitter_C.UserConstructionScript");

	AProjMek_ImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjMek_ImpactEmitter.ProjMek_ImpactEmitter_C.ExecuteUbergraph_ProjMek_ImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjMek_ImpactEmitter_C::ExecuteUbergraph_ProjMek_ImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMek_ImpactEmitter.ProjMek_ImpactEmitter_C.ExecuteUbergraph_ProjMek_ImpactEmitter");

	AProjMek_ImpactEmitter_C_ExecuteUbergraph_ProjMek_ImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
