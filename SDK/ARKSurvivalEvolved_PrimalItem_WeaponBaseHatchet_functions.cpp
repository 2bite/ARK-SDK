// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponBaseHatchet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponBaseHatchet.PrimalItem_WeaponBaseHatchet_C.ExecuteUbergraph_PrimalItem_WeaponBaseHatchet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponBaseHatchet_C::ExecuteUbergraph_PrimalItem_WeaponBaseHatchet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponBaseHatchet.PrimalItem_WeaponBaseHatchet_C.ExecuteUbergraph_PrimalItem_WeaponBaseHatchet");

	UPrimalItem_WeaponBaseHatchet_C_ExecuteUbergraph_PrimalItem_WeaponBaseHatchet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
