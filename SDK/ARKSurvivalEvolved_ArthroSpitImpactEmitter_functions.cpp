// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArthroSpitImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArthroSpitImpactEmitter.ArthroSpitImpactEmitter_C.UserConstructionScript
// ()

void AArthroSpitImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArthroSpitImpactEmitter.ArthroSpitImpactEmitter_C.UserConstructionScript");

	AArthroSpitImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArthroSpitImpactEmitter.ArthroSpitImpactEmitter_C.ExecuteUbergraph_ArthroSpitImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AArthroSpitImpactEmitter_C::ExecuteUbergraph_ArthroSpitImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArthroSpitImpactEmitter.ArthroSpitImpactEmitter_C.ExecuteUbergraph_ArthroSpitImpactEmitter");

	AArthroSpitImpactEmitter_C_ExecuteUbergraph_ArthroSpitImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
