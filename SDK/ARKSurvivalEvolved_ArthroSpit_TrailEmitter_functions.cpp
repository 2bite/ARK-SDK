// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArthroSpit_TrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArthroSpit_TrailEmitter.ArthroSpit_TrailEmitter_C.UserConstructionScript
// ()

void AArthroSpit_TrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArthroSpit_TrailEmitter.ArthroSpit_TrailEmitter_C.UserConstructionScript");

	AArthroSpit_TrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArthroSpit_TrailEmitter.ArthroSpit_TrailEmitter_C.ExecuteUbergraph_ArthroSpit_TrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AArthroSpit_TrailEmitter_C::ExecuteUbergraph_ArthroSpit_TrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArthroSpit_TrailEmitter.ArthroSpit_TrailEmitter_C.ExecuteUbergraph_ArthroSpit_TrailEmitter");

	AArthroSpit_TrailEmitter_C_ExecuteUbergraph_ArthroSpit_TrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
