// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponProd_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponProd.PrimalItem_WeaponProd_C.ExecuteUbergraph_PrimalItem_WeaponProd
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponProd_C::ExecuteUbergraph_PrimalItem_WeaponProd(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponProd.PrimalItem_WeaponProd_C.ExecuteUbergraph_PrimalItem_WeaponProd");

	UPrimalItem_WeaponProd_C_ExecuteUbergraph_PrimalItem_WeaponProd_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
