// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekBowExplosiveArrow_TrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekBowExplosiveArrow_TrailEmitter.TekBowExplosiveArrow_TrailEmitter_C.UserConstructionScript
// ()

void ATekBowExplosiveArrow_TrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBowExplosiveArrow_TrailEmitter.TekBowExplosiveArrow_TrailEmitter_C.UserConstructionScript");

	ATekBowExplosiveArrow_TrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekBowExplosiveArrow_TrailEmitter.TekBowExplosiveArrow_TrailEmitter_C.ExecuteUbergraph_TekBowExplosiveArrow_TrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekBowExplosiveArrow_TrailEmitter_C::ExecuteUbergraph_TekBowExplosiveArrow_TrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBowExplosiveArrow_TrailEmitter.TekBowExplosiveArrow_TrailEmitter_C.ExecuteUbergraph_TekBowExplosiveArrow_TrailEmitter");

	ATekBowExplosiveArrow_TrailEmitter_C_ExecuteUbergraph_TekBowExplosiveArrow_TrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
