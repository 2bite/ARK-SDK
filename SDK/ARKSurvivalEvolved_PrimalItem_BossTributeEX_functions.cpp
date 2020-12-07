// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_BossTributeEX_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_BossTributeEX.PrimalItem_BossTributeEX_C.BPAllowCrafting
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItem_BossTributeEX_C::BPAllowCrafting(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_BossTributeEX.PrimalItem_BossTributeEX_C.BPAllowCrafting");

	UPrimalItem_BossTributeEX_C_BPAllowCrafting_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_BossTributeEX.PrimalItem_BossTributeEX_C.ExecuteUbergraph_PrimalItem_BossTributeEX
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_BossTributeEX_C::ExecuteUbergraph_PrimalItem_BossTributeEX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_BossTributeEX.PrimalItem_BossTributeEX_C.ExecuteUbergraph_PrimalItem_BossTributeEX");

	UPrimalItem_BossTributeEX_C_ExecuteUbergraph_PrimalItem_BossTributeEX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
