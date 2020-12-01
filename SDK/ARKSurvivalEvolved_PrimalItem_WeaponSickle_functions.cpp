// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponSickle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponSickle.PrimalItem_WeaponSickle_C.ExecuteUbergraph_PrimalItem_WeaponSickle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponSickle_C::ExecuteUbergraph_PrimalItem_WeaponSickle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponSickle.PrimalItem_WeaponSickle_C.ExecuteUbergraph_PrimalItem_WeaponSickle");

	UPrimalItem_WeaponSickle_C_ExecuteUbergraph_PrimalItem_WeaponSickle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
