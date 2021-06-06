// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponMetalPick_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponMetalPick.PrimalItem_WeaponMetalPick_C.ExecuteUbergraph_PrimalItem_WeaponMetalPick
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponMetalPick_C::ExecuteUbergraph_PrimalItem_WeaponMetalPick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponMetalPick.PrimalItem_WeaponMetalPick_C.ExecuteUbergraph_PrimalItem_WeaponMetalPick");

	UPrimalItem_WeaponMetalPick_C_ExecuteUbergraph_PrimalItem_WeaponMetalPick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
