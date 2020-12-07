// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponOneShotRifle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponOneShotRifle.PrimalItem_WeaponOneShotRifle_C.ExecuteUbergraph_PrimalItem_WeaponOneShotRifle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponOneShotRifle_C::ExecuteUbergraph_PrimalItem_WeaponOneShotRifle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponOneShotRifle.PrimalItem_WeaponOneShotRifle_C.ExecuteUbergraph_PrimalItem_WeaponOneShotRifle");

	UPrimalItem_WeaponOneShotRifle_C_ExecuteUbergraph_PrimalItem_WeaponOneShotRifle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
