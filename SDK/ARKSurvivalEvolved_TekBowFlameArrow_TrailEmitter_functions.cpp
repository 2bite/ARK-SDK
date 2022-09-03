// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekBowFlameArrow_TrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekBowFlameArrow_TrailEmitter.TekBowFlameArrow_TrailEmitter_C.UserConstructionScript
// ()

void ATekBowFlameArrow_TrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBowFlameArrow_TrailEmitter.TekBowFlameArrow_TrailEmitter_C.UserConstructionScript");

	ATekBowFlameArrow_TrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekBowFlameArrow_TrailEmitter.TekBowFlameArrow_TrailEmitter_C.ExecuteUbergraph_TekBowFlameArrow_TrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekBowFlameArrow_TrailEmitter_C::ExecuteUbergraph_TekBowFlameArrow_TrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBowFlameArrow_TrailEmitter.TekBowFlameArrow_TrailEmitter_C.ExecuteUbergraph_TekBowFlameArrow_TrailEmitter");

	ATekBowFlameArrow_TrailEmitter_C_ExecuteUbergraph_TekBowFlameArrow_TrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
