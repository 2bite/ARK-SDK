// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponPoisonTrap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponPoisonTrap.PrimalItem_WeaponPoisonTrap_C.ExecuteUbergraph_PrimalItem_WeaponPoisonTrap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponPoisonTrap_C::ExecuteUbergraph_PrimalItem_WeaponPoisonTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponPoisonTrap.PrimalItem_WeaponPoisonTrap_C.ExecuteUbergraph_PrimalItem_WeaponPoisonTrap");

	UPrimalItem_WeaponPoisonTrap_C_ExecuteUbergraph_PrimalItem_WeaponPoisonTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
