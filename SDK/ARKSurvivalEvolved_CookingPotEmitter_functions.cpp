// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CookingPotEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CookingPotEmitter.CookingPotEmitter_C.UserConstructionScript
// ()

void ACookingPotEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CookingPotEmitter.CookingPotEmitter_C.UserConstructionScript");

	ACookingPotEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CookingPotEmitter.CookingPotEmitter_C.ExecuteUbergraph_CookingPotEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACookingPotEmitter_C::ExecuteUbergraph_CookingPotEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CookingPotEmitter.CookingPotEmitter_C.ExecuteUbergraph_CookingPotEmitter");

	ACookingPotEmitter_C_ExecuteUbergraph_CookingPotEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
