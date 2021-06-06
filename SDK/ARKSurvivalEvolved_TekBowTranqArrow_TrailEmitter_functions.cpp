// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekBowTranqArrow_TrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekBowTranqArrow_TrailEmitter.TekBowTranqArrow_TrailEmitter_C.UserConstructionScript
// ()

void ATekBowTranqArrow_TrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBowTranqArrow_TrailEmitter.TekBowTranqArrow_TrailEmitter_C.UserConstructionScript");

	ATekBowTranqArrow_TrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekBowTranqArrow_TrailEmitter.TekBowTranqArrow_TrailEmitter_C.ExecuteUbergraph_TekBowTranqArrow_TrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekBowTranqArrow_TrailEmitter_C::ExecuteUbergraph_TekBowTranqArrow_TrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBowTranqArrow_TrailEmitter.TekBowTranqArrow_TrailEmitter_C.ExecuteUbergraph_TekBowTranqArrow_TrailEmitter");

	ATekBowTranqArrow_TrailEmitter_C_ExecuteUbergraph_TekBowTranqArrow_TrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
