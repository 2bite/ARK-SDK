// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_ChibiDino_RandomCraftable_Birthday_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_ChibiDino_RandomCraftable_Birthday.PrimalItem_ChibiDino_RandomCraftable_Birthday_C.ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable_Birthday
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_ChibiDino_RandomCraftable_Birthday_C::ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable_Birthday(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_ChibiDino_RandomCraftable_Birthday.PrimalItem_ChibiDino_RandomCraftable_Birthday_C.ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable_Birthday");

	UPrimalItem_ChibiDino_RandomCraftable_Birthday_C_ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable_Birthday_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
