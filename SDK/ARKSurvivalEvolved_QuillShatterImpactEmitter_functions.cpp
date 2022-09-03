// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_QuillShatterImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QuillShatterImpactEmitter.QuillShatterImpactEmitter_C.UserConstructionScript
// ()

void AQuillShatterImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuillShatterImpactEmitter.QuillShatterImpactEmitter_C.UserConstructionScript");

	AQuillShatterImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuillShatterImpactEmitter.QuillShatterImpactEmitter_C.ExecuteUbergraph_QuillShatterImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AQuillShatterImpactEmitter_C::ExecuteUbergraph_QuillShatterImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuillShatterImpactEmitter.QuillShatterImpactEmitter_C.ExecuteUbergraph_QuillShatterImpactEmitter");

	AQuillShatterImpactEmitter_C_ExecuteUbergraph_QuillShatterImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
