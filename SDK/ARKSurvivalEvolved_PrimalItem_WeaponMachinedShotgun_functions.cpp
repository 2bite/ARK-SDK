// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponMachinedShotgun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponMachinedShotgun.PrimalItem_WeaponMachinedShotgun_C.ExecuteUbergraph_PrimalItem_WeaponMachinedShotgun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponMachinedShotgun_C::ExecuteUbergraph_PrimalItem_WeaponMachinedShotgun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponMachinedShotgun.PrimalItem_WeaponMachinedShotgun_C.ExecuteUbergraph_PrimalItem_WeaponMachinedShotgun");

	UPrimalItem_WeaponMachinedShotgun_C_ExecuteUbergraph_PrimalItem_WeaponMachinedShotgun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
