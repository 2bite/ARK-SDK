// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponWhip_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponWhip.PrimalItem_WeaponWhip_C.ExecuteUbergraph_PrimalItem_WeaponWhip
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponWhip_C::ExecuteUbergraph_PrimalItem_WeaponWhip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponWhip.PrimalItem_WeaponWhip_C.ExecuteUbergraph_PrimalItem_WeaponWhip");

	UPrimalItem_WeaponWhip_C_ExecuteUbergraph_PrimalItem_WeaponWhip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
