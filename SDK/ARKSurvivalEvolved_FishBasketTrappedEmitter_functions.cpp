// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FishBasketTrappedEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FishBasketTrappedEmitter.FishBasketTrappedEmitter_C.UserConstructionScript
// ()

void AFishBasketTrappedEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FishBasketTrappedEmitter.FishBasketTrappedEmitter_C.UserConstructionScript");

	AFishBasketTrappedEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FishBasketTrappedEmitter.FishBasketTrappedEmitter_C.ExecuteUbergraph_FishBasketTrappedEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFishBasketTrappedEmitter_C::ExecuteUbergraph_FishBasketTrappedEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FishBasketTrappedEmitter.FishBasketTrappedEmitter_C.ExecuteUbergraph_FishBasketTrappedEmitter");

	AFishBasketTrappedEmitter_C_ExecuteUbergraph_FishBasketTrappedEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
