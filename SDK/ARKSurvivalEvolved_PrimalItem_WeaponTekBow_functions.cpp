// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponTekBow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponTekBow.PrimalItem_WeaponTekBow_C.ExecuteUbergraph_PrimalItem_WeaponTekBow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTekBow_C::ExecuteUbergraph_PrimalItem_WeaponTekBow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekBow.PrimalItem_WeaponTekBow_C.ExecuteUbergraph_PrimalItem_WeaponTekBow");

	UPrimalItem_WeaponTekBow_C_ExecuteUbergraph_PrimalItem_WeaponTekBow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
