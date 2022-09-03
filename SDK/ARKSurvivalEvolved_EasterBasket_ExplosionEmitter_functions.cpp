// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EasterBasket_ExplosionEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EasterBasket_ExplosionEmitter.EasterBasket_ExplosionEmitter_C.UserConstructionScript
// ()

void AEasterBasket_ExplosionEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EasterBasket_ExplosionEmitter.EasterBasket_ExplosionEmitter_C.UserConstructionScript");

	AEasterBasket_ExplosionEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EasterBasket_ExplosionEmitter.EasterBasket_ExplosionEmitter_C.ExecuteUbergraph_EasterBasket_ExplosionEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEasterBasket_ExplosionEmitter_C::ExecuteUbergraph_EasterBasket_ExplosionEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EasterBasket_ExplosionEmitter.EasterBasket_ExplosionEmitter_C.ExecuteUbergraph_EasterBasket_ExplosionEmitter");

	AEasterBasket_ExplosionEmitter_C_ExecuteUbergraph_EasterBasket_ExplosionEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
