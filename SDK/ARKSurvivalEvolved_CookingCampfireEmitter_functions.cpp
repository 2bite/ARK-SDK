// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CookingCampfireEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CookingCampfireEmitter.CookingCampfireEmitter_C.UserConstructionScript
// ()

void ACookingCampfireEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CookingCampfireEmitter.CookingCampfireEmitter_C.UserConstructionScript");

	ACookingCampfireEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CookingCampfireEmitter.CookingCampfireEmitter_C.ExecuteUbergraph_CookingCampfireEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACookingCampfireEmitter_C::ExecuteUbergraph_CookingCampfireEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CookingCampfireEmitter.CookingCampfireEmitter_C.ExecuteUbergraph_CookingCampfireEmitter");

	ACookingCampfireEmitter_C_ExecuteUbergraph_CookingCampfireEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
