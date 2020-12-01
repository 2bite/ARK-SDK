// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponClusterGrenade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponClusterGrenade.PrimalItem_WeaponClusterGrenade_C.ExecuteUbergraph_PrimalItem_WeaponClusterGrenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponClusterGrenade_C::ExecuteUbergraph_PrimalItem_WeaponClusterGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponClusterGrenade.PrimalItem_WeaponClusterGrenade_C.ExecuteUbergraph_PrimalItem_WeaponClusterGrenade");

	UPrimalItem_WeaponClusterGrenade_C_ExecuteUbergraph_PrimalItem_WeaponClusterGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
