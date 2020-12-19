// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponStoneHatchet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponStoneHatchet.PrimalItem_WeaponStoneHatchet_C.ExecuteUbergraph_PrimalItem_WeaponStoneHatchet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponStoneHatchet_C::ExecuteUbergraph_PrimalItem_WeaponStoneHatchet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponStoneHatchet.PrimalItem_WeaponStoneHatchet_C.ExecuteUbergraph_PrimalItem_WeaponStoneHatchet");

	UPrimalItem_WeaponStoneHatchet_C_ExecuteUbergraph_PrimalItem_WeaponStoneHatchet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
