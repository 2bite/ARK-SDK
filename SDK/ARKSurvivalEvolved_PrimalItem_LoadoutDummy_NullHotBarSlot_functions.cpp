// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_LoadoutDummy_NullHotBarSlot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_LoadoutDummy_NullHotBarSlot.PrimalItem_LoadoutDummy_NullHotBarSlot_C.ExecuteUbergraph_PrimalItem_LoadoutDummy_NullHotBarSlot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_LoadoutDummy_NullHotBarSlot_C::ExecuteUbergraph_PrimalItem_LoadoutDummy_NullHotBarSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_LoadoutDummy_NullHotBarSlot.PrimalItem_LoadoutDummy_NullHotBarSlot_C.ExecuteUbergraph_PrimalItem_LoadoutDummy_NullHotBarSlot");

	UPrimalItem_LoadoutDummy_NullHotBarSlot_C_ExecuteUbergraph_PrimalItem_LoadoutDummy_NullHotBarSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
