// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils.PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C.ExecuteUbergraph_PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C::ExecuteUbergraph_PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils.PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C.ExecuteUbergraph_PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils");

	UPrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C_ExecuteUbergraph_PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
