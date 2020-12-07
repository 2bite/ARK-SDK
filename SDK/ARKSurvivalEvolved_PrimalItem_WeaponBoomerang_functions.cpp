// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponBoomerang_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponBoomerang.PrimalItem_WeaponBoomerang_C.ExecuteUbergraph_PrimalItem_WeaponBoomerang
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponBoomerang_C::ExecuteUbergraph_PrimalItem_WeaponBoomerang(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponBoomerang.PrimalItem_WeaponBoomerang_C.ExecuteUbergraph_PrimalItem_WeaponBoomerang");

	UPrimalItem_WeaponBoomerang_C_ExecuteUbergraph_PrimalItem_WeaponBoomerang_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
