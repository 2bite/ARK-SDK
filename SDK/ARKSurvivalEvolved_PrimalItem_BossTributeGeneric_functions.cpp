// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_BossTributeGeneric_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_BossTributeGeneric.PrimalItem_BossTributeGeneric_C.BPAllowCrafting
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItem_BossTributeGeneric_C::BPAllowCrafting(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_BossTributeGeneric.PrimalItem_BossTributeGeneric_C.BPAllowCrafting");

	UPrimalItem_BossTributeGeneric_C_BPAllowCrafting_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_BossTributeGeneric.PrimalItem_BossTributeGeneric_C.ExecuteUbergraph_PrimalItem_BossTributeGeneric
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_BossTributeGeneric_C::ExecuteUbergraph_PrimalItem_BossTributeGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_BossTributeGeneric.PrimalItem_BossTributeGeneric_C.ExecuteUbergraph_PrimalItem_BossTributeGeneric");

	UPrimalItem_BossTributeGeneric_C_ExecuteUbergraph_PrimalItem_BossTributeGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
