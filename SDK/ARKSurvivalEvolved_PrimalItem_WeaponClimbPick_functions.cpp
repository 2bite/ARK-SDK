// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponClimbPick_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponClimbPick.PrimalItem_WeaponClimbPick_C.ExecuteUbergraph_PrimalItem_WeaponClimbPick
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponClimbPick_C::ExecuteUbergraph_PrimalItem_WeaponClimbPick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponClimbPick.PrimalItem_WeaponClimbPick_C.ExecuteUbergraph_PrimalItem_WeaponClimbPick");

	UPrimalItem_WeaponClimbPick_C_ExecuteUbergraph_PrimalItem_WeaponClimbPick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
