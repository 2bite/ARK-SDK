// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponLasso_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponLasso.PrimalItem_WeaponLasso_C.ExecuteUbergraph_PrimalItem_WeaponLasso
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponLasso_C::ExecuteUbergraph_PrimalItem_WeaponLasso(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponLasso.PrimalItem_WeaponLasso_C.ExecuteUbergraph_PrimalItem_WeaponLasso");

	UPrimalItem_WeaponLasso_C_ExecuteUbergraph_PrimalItem_WeaponLasso_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
