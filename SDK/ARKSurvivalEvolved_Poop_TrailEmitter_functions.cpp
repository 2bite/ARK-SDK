// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Poop_TrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Poop_TrailEmitter.Poop_TrailEmitter_C.UserConstructionScript
// ()

void APoop_TrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Poop_TrailEmitter.Poop_TrailEmitter_C.UserConstructionScript");

	APoop_TrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Poop_TrailEmitter.Poop_TrailEmitter_C.ExecuteUbergraph_Poop_TrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APoop_TrailEmitter_C::ExecuteUbergraph_Poop_TrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Poop_TrailEmitter.Poop_TrailEmitter_C.ExecuteUbergraph_Poop_TrailEmitter");

	APoop_TrailEmitter_C_ExecuteUbergraph_Poop_TrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
