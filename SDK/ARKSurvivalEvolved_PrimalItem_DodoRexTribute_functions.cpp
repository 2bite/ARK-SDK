// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_DodoRexTribute_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_DodoRexTribute.PrimalItem_DodoRexTribute_C.BPAllowCrafting
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItem_DodoRexTribute_C::BPAllowCrafting(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_DodoRexTribute.PrimalItem_DodoRexTribute_C.BPAllowCrafting");

	UPrimalItem_DodoRexTribute_C_BPAllowCrafting_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_DodoRexTribute.PrimalItem_DodoRexTribute_C.ExecuteUbergraph_PrimalItem_DodoRexTribute
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_DodoRexTribute_C::ExecuteUbergraph_PrimalItem_DodoRexTribute(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_DodoRexTribute.PrimalItem_DodoRexTribute_C.ExecuteUbergraph_PrimalItem_DodoRexTribute");

	UPrimalItem_DodoRexTribute_C_ExecuteUbergraph_PrimalItem_DodoRexTribute_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
