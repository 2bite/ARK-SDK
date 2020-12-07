// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponGrenade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponGrenade.PrimalItem_WeaponGrenade_C.ExecuteUbergraph_PrimalItem_WeaponGrenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponGrenade_C::ExecuteUbergraph_PrimalItem_WeaponGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponGrenade.PrimalItem_WeaponGrenade_C.ExecuteUbergraph_PrimalItem_WeaponGrenade");

	UPrimalItem_WeaponGrenade_C_ExecuteUbergraph_PrimalItem_WeaponGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
