// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponStonePick_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponStonePick.PrimalItem_WeaponStonePick_C.ExecuteUbergraph_PrimalItem_WeaponStonePick
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponStonePick_C::ExecuteUbergraph_PrimalItem_WeaponStonePick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponStonePick.PrimalItem_WeaponStonePick_C.ExecuteUbergraph_PrimalItem_WeaponStonePick");

	UPrimalItem_WeaponStonePick_C_ExecuteUbergraph_PrimalItem_WeaponStonePick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
