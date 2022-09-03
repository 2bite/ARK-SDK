// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponCompoundBow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponCompoundBow.PrimalItem_WeaponCompoundBow_C.ExecuteUbergraph_PrimalItem_WeaponCompoundBow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponCompoundBow_C::ExecuteUbergraph_PrimalItem_WeaponCompoundBow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponCompoundBow.PrimalItem_WeaponCompoundBow_C.ExecuteUbergraph_PrimalItem_WeaponCompoundBow");

	UPrimalItem_WeaponCompoundBow_C_ExecuteUbergraph_PrimalItem_WeaponCompoundBow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
