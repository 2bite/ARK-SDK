// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BolaImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BolaImpactEmitter.BolaImpactEmitter_C.UserConstructionScript
// ()

void ABolaImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BolaImpactEmitter.BolaImpactEmitter_C.UserConstructionScript");

	ABolaImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BolaImpactEmitter.BolaImpactEmitter_C.ExecuteUbergraph_BolaImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABolaImpactEmitter_C::ExecuteUbergraph_BolaImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BolaImpactEmitter.BolaImpactEmitter_C.ExecuteUbergraph_BolaImpactEmitter");

	ABolaImpactEmitter_C_ExecuteUbergraph_BolaImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
