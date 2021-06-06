// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_PurchasableEngram_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_PurchasableEngram.PrimalItem_PurchasableEngram_C.ExecuteUbergraph_PrimalItem_PurchasableEngram
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_PurchasableEngram_C::ExecuteUbergraph_PrimalItem_PurchasableEngram(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_PurchasableEngram.PrimalItem_PurchasableEngram_C.ExecuteUbergraph_PrimalItem_PurchasableEngram");

	UPrimalItem_PurchasableEngram_C_ExecuteUbergraph_PrimalItem_PurchasableEngram_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
