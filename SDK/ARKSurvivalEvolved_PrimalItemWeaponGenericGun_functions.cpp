// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemWeaponGenericGun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemWeaponGenericGun.PrimalItemWeaponGenericGun_C.ExecuteUbergraph_PrimalItemWeaponGenericGun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemWeaponGenericGun_C::ExecuteUbergraph_PrimalItemWeaponGenericGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemWeaponGenericGun.PrimalItemWeaponGenericGun_C.ExecuteUbergraph_PrimalItemWeaponGenericGun");

	UPrimalItemWeaponGenericGun_C_ExecuteUbergraph_PrimalItemWeaponGenericGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
