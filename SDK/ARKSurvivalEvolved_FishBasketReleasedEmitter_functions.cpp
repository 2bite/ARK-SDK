// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FishBasketReleasedEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FishBasketReleasedEmitter.FishBasketReleasedEmitter_C.UserConstructionScript
// ()

void AFishBasketReleasedEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FishBasketReleasedEmitter.FishBasketReleasedEmitter_C.UserConstructionScript");

	AFishBasketReleasedEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FishBasketReleasedEmitter.FishBasketReleasedEmitter_C.ExecuteUbergraph_FishBasketReleasedEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFishBasketReleasedEmitter_C::ExecuteUbergraph_FishBasketReleasedEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FishBasketReleasedEmitter.FishBasketReleasedEmitter_C.ExecuteUbergraph_FishBasketReleasedEmitter");

	AFishBasketReleasedEmitter_C_ExecuteUbergraph_FishBasketReleasedEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
