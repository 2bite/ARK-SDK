// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponRocketLauncher_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponRocketLauncher.PrimalItem_WeaponRocketLauncher_C.ExecuteUbergraph_PrimalItem_WeaponRocketLauncher
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponRocketLauncher_C::ExecuteUbergraph_PrimalItem_WeaponRocketLauncher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponRocketLauncher.PrimalItem_WeaponRocketLauncher_C.ExecuteUbergraph_PrimalItem_WeaponRocketLauncher");

	UPrimalItem_WeaponRocketLauncher_C_ExecuteUbergraph_PrimalItem_WeaponRocketLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
