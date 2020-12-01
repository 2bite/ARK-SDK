// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemWeaponGenericAmmoless_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemWeaponGenericAmmoless.PrimalItemWeaponGenericAmmoless_C.ExecuteUbergraph_PrimalItemWeaponGenericAmmoless
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemWeaponGenericAmmoless_C::ExecuteUbergraph_PrimalItemWeaponGenericAmmoless(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemWeaponGenericAmmoless.PrimalItemWeaponGenericAmmoless_C.ExecuteUbergraph_PrimalItemWeaponGenericAmmoless");

	UPrimalItemWeaponGenericAmmoless_C_ExecuteUbergraph_PrimalItemWeaponGenericAmmoless_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
