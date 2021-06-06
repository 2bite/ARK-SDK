// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponShotgun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponShotgun.PrimalItem_WeaponShotgun_C.ExecuteUbergraph_PrimalItem_WeaponShotgun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponShotgun_C::ExecuteUbergraph_PrimalItem_WeaponShotgun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponShotgun.PrimalItem_WeaponShotgun_C.ExecuteUbergraph_PrimalItem_WeaponShotgun");

	UPrimalItem_WeaponShotgun_C_ExecuteUbergraph_PrimalItem_WeaponShotgun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
