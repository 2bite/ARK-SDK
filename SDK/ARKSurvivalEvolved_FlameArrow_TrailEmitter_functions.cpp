// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FlameArrow_TrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FlameArrow_TrailEmitter.FlameArrow_TrailEmitter_C.UserConstructionScript
// ()

void AFlameArrow_TrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlameArrow_TrailEmitter.FlameArrow_TrailEmitter_C.UserConstructionScript");

	AFlameArrow_TrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlameArrow_TrailEmitter.FlameArrow_TrailEmitter_C.ExecuteUbergraph_FlameArrow_TrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFlameArrow_TrailEmitter_C::ExecuteUbergraph_FlameArrow_TrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlameArrow_TrailEmitter.FlameArrow_TrailEmitter_C.ExecuteUbergraph_FlameArrow_TrailEmitter");

	AFlameArrow_TrailEmitter_C_ExecuteUbergraph_FlameArrow_TrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
