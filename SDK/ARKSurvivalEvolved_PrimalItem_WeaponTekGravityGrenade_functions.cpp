// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponTekGravityGrenade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponTekGravityGrenade.PrimalItem_WeaponTekGravityGrenade_C.ExecuteUbergraph_PrimalItem_WeaponTekGravityGrenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTekGravityGrenade_C::ExecuteUbergraph_PrimalItem_WeaponTekGravityGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekGravityGrenade.PrimalItem_WeaponTekGravityGrenade_C.ExecuteUbergraph_PrimalItem_WeaponTekGravityGrenade");

	UPrimalItem_WeaponTekGravityGrenade_C_ExecuteUbergraph_PrimalItem_WeaponTekGravityGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
