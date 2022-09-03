// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LiquidBombImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LiquidBombImpactEmitter.LiquidBombImpactEmitter_C.UserConstructionScript
// ()

void ALiquidBombImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LiquidBombImpactEmitter.LiquidBombImpactEmitter_C.UserConstructionScript");

	ALiquidBombImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LiquidBombImpactEmitter.LiquidBombImpactEmitter_C.ExecuteUbergraph_LiquidBombImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALiquidBombImpactEmitter_C::ExecuteUbergraph_LiquidBombImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiquidBombImpactEmitter.LiquidBombImpactEmitter_C.ExecuteUbergraph_LiquidBombImpactEmitter");

	ALiquidBombImpactEmitter_C_ExecuteUbergraph_LiquidBombImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
