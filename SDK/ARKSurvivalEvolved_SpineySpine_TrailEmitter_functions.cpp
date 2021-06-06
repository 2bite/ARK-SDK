// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpineySpine_TrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpineySpine_TrailEmitter.SpineySpine_TrailEmitter_C.UserConstructionScript
// ()

void ASpineySpine_TrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpineySpine_TrailEmitter.SpineySpine_TrailEmitter_C.UserConstructionScript");

	ASpineySpine_TrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpineySpine_TrailEmitter.SpineySpine_TrailEmitter_C.ExecuteUbergraph_SpineySpine_TrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpineySpine_TrailEmitter_C::ExecuteUbergraph_SpineySpine_TrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpineySpine_TrailEmitter.SpineySpine_TrailEmitter_C.ExecuteUbergraph_SpineySpine_TrailEmitter");

	ASpineySpine_TrailEmitter_C_ExecuteUbergraph_SpineySpine_TrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
