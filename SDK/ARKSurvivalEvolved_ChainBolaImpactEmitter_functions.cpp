// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChainBolaImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChainBolaImpactEmitter.ChainBolaImpactEmitter_C.UserConstructionScript
// ()

void AChainBolaImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChainBolaImpactEmitter.ChainBolaImpactEmitter_C.UserConstructionScript");

	AChainBolaImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChainBolaImpactEmitter.ChainBolaImpactEmitter_C.ExecuteUbergraph_ChainBolaImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AChainBolaImpactEmitter_C::ExecuteUbergraph_ChainBolaImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChainBolaImpactEmitter.ChainBolaImpactEmitter_C.ExecuteUbergraph_ChainBolaImpactEmitter");

	AChainBolaImpactEmitter_C_ExecuteUbergraph_ChainBolaImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
