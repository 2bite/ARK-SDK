// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DiloSpitImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DiloSpitImpactEmitter.DiloSpitImpactEmitter_C.UserConstructionScript
// ()

void ADiloSpitImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DiloSpitImpactEmitter.DiloSpitImpactEmitter_C.UserConstructionScript");

	ADiloSpitImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiloSpitImpactEmitter.DiloSpitImpactEmitter_C.ExecuteUbergraph_DiloSpitImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADiloSpitImpactEmitter_C::ExecuteUbergraph_DiloSpitImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DiloSpitImpactEmitter.DiloSpitImpactEmitter_C.ExecuteUbergraph_DiloSpitImpactEmitter");

	ADiloSpitImpactEmitter_C_ExecuteUbergraph_DiloSpitImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
