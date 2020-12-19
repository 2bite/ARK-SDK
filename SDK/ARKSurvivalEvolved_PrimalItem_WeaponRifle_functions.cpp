// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponRifle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponRifle.PrimalItem_WeaponRifle_C.ExecuteUbergraph_PrimalItem_WeaponRifle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponRifle_C::ExecuteUbergraph_PrimalItem_WeaponRifle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponRifle.PrimalItem_WeaponRifle_C.ExecuteUbergraph_PrimalItem_WeaponRifle");

	UPrimalItem_WeaponRifle_C_ExecuteUbergraph_PrimalItem_WeaponRifle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
