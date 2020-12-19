// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PoopImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PoopImpactEmitter.PoopImpactEmitter_C.UserConstructionScript
// ()

void APoopImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoopImpactEmitter.PoopImpactEmitter_C.UserConstructionScript");

	APoopImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoopImpactEmitter.PoopImpactEmitter_C.ExecuteUbergraph_PoopImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APoopImpactEmitter_C::ExecuteUbergraph_PoopImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoopImpactEmitter.PoopImpactEmitter_C.ExecuteUbergraph_PoopImpactEmitter");

	APoopImpactEmitter_C_ExecuteUbergraph_PoopImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
