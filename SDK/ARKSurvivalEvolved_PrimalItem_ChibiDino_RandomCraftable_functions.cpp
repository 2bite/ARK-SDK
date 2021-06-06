// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_ChibiDino_RandomCraftable_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_ChibiDino_RandomCraftable.PrimalItem_ChibiDino_RandomCraftable_C.BPCrafted
// ()

void UPrimalItem_ChibiDino_RandomCraftable_C::BPCrafted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_ChibiDino_RandomCraftable.PrimalItem_ChibiDino_RandomCraftable_C.BPCrafted");

	UPrimalItem_ChibiDino_RandomCraftable_C_BPCrafted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_ChibiDino_RandomCraftable.PrimalItem_ChibiDino_RandomCraftable_C.ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_ChibiDino_RandomCraftable_C::ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_ChibiDino_RandomCraftable.PrimalItem_ChibiDino_RandomCraftable_C.ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable");

	UPrimalItem_ChibiDino_RandomCraftable_C_ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
