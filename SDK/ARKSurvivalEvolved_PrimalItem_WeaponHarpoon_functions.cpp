// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponHarpoon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponHarpoon.PrimalItem_WeaponHarpoon_C.ExecuteUbergraph_PrimalItem_WeaponHarpoon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponHarpoon_C::ExecuteUbergraph_PrimalItem_WeaponHarpoon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponHarpoon.PrimalItem_WeaponHarpoon_C.ExecuteUbergraph_PrimalItem_WeaponHarpoon");

	UPrimalItem_WeaponHarpoon_C_ExecuteUbergraph_PrimalItem_WeaponHarpoon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
