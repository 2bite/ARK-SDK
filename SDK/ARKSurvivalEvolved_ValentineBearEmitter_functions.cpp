// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ValentineBearEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ValentineBearEmitter.ValentineBearEmitter_C.UserConstructionScript
// ()

void AValentineBearEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ValentineBearEmitter.ValentineBearEmitter_C.UserConstructionScript");

	AValentineBearEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValentineBearEmitter.ValentineBearEmitter_C.ExecuteUbergraph_ValentineBearEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AValentineBearEmitter_C::ExecuteUbergraph_ValentineBearEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ValentineBearEmitter.ValentineBearEmitter_C.ExecuteUbergraph_ValentineBearEmitter");

	AValentineBearEmitter_C_ExecuteUbergraph_ValentineBearEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
