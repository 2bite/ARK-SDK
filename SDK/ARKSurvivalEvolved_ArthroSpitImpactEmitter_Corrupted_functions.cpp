// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArthroSpitImpactEmitter_Corrupted_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArthroSpitImpactEmitter_Corrupted.ArthroSpitImpactEmitter_Corrupted_C.UserConstructionScript
// ()

void AArthroSpitImpactEmitter_Corrupted_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArthroSpitImpactEmitter_Corrupted.ArthroSpitImpactEmitter_Corrupted_C.UserConstructionScript");

	AArthroSpitImpactEmitter_Corrupted_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArthroSpitImpactEmitter_Corrupted.ArthroSpitImpactEmitter_Corrupted_C.ExecuteUbergraph_ArthroSpitImpactEmitter_Corrupted
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AArthroSpitImpactEmitter_Corrupted_C::ExecuteUbergraph_ArthroSpitImpactEmitter_Corrupted(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArthroSpitImpactEmitter_Corrupted.ArthroSpitImpactEmitter_Corrupted_C.ExecuteUbergraph_ArthroSpitImpactEmitter_Corrupted");

	AArthroSpitImpactEmitter_Corrupted_C_ExecuteUbergraph_ArthroSpitImpactEmitter_Corrupted_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
