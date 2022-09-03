// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DiloSpit_TrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DiloSpit_TrailEmitter.DiloSpit_TrailEmitter_C.UserConstructionScript
// ()

void ADiloSpit_TrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DiloSpit_TrailEmitter.DiloSpit_TrailEmitter_C.UserConstructionScript");

	ADiloSpit_TrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiloSpit_TrailEmitter.DiloSpit_TrailEmitter_C.ExecuteUbergraph_DiloSpit_TrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADiloSpit_TrailEmitter_C::ExecuteUbergraph_DiloSpit_TrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DiloSpit_TrailEmitter.DiloSpit_TrailEmitter_C.ExecuteUbergraph_DiloSpit_TrailEmitter");

	ADiloSpit_TrailEmitter_C_ExecuteUbergraph_DiloSpit_TrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
