// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponAdminBlinkRifle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponAdminBlinkRifle.PrimalItem_WeaponAdminBlinkRifle_C.ExecuteUbergraph_PrimalItem_WeaponAdminBlinkRifle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponAdminBlinkRifle_C::ExecuteUbergraph_PrimalItem_WeaponAdminBlinkRifle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponAdminBlinkRifle.PrimalItem_WeaponAdminBlinkRifle_C.ExecuteUbergraph_PrimalItem_WeaponAdminBlinkRifle");

	UPrimalItem_WeaponAdminBlinkRifle_C_ExecuteUbergraph_PrimalItem_WeaponAdminBlinkRifle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
