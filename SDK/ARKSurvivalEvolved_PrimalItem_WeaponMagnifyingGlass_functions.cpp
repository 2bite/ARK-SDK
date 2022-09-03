// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponMagnifyingGlass_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponMagnifyingGlass.PrimalItem_WeaponMagnifyingGlass_C.ExecuteUbergraph_PrimalItem_WeaponMagnifyingGlass
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponMagnifyingGlass_C::ExecuteUbergraph_PrimalItem_WeaponMagnifyingGlass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponMagnifyingGlass.PrimalItem_WeaponMagnifyingGlass_C.ExecuteUbergraph_PrimalItem_WeaponMagnifyingGlass");

	UPrimalItem_WeaponMagnifyingGlass_C_ExecuteUbergraph_PrimalItem_WeaponMagnifyingGlass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
