// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekBowMetalArrow_TrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekBowMetalArrow_TrailEmitter.TekBowMetalArrow_TrailEmitter_C.UserConstructionScript
// ()

void ATekBowMetalArrow_TrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBowMetalArrow_TrailEmitter.TekBowMetalArrow_TrailEmitter_C.UserConstructionScript");

	ATekBowMetalArrow_TrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekBowMetalArrow_TrailEmitter.TekBowMetalArrow_TrailEmitter_C.ExecuteUbergraph_TekBowMetalArrow_TrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekBowMetalArrow_TrailEmitter_C::ExecuteUbergraph_TekBowMetalArrow_TrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBowMetalArrow_TrailEmitter.TekBowMetalArrow_TrailEmitter_C.ExecuteUbergraph_TekBowMetalArrow_TrailEmitter");

	ATekBowMetalArrow_TrailEmitter_C_ExecuteUbergraph_TekBowMetalArrow_TrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
