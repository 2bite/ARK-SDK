// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponTekPistol_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponTekPistol.PrimalItem_WeaponTekPistol_C.ExecuteUbergraph_PrimalItem_WeaponTekPistol
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTekPistol_C::ExecuteUbergraph_PrimalItem_WeaponTekPistol(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekPistol.PrimalItem_WeaponTekPistol_C.ExecuteUbergraph_PrimalItem_WeaponTekPistol");

	UPrimalItem_WeaponTekPistol_C_ExecuteUbergraph_PrimalItem_WeaponTekPistol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
