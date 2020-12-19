// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponBaseClub_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponBaseClub.PrimalItem_WeaponBaseClub_C.ExecuteUbergraph_PrimalItem_WeaponBaseClub
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponBaseClub_C::ExecuteUbergraph_PrimalItem_WeaponBaseClub(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponBaseClub.PrimalItem_WeaponBaseClub_C.ExecuteUbergraph_PrimalItem_WeaponBaseClub");

	UPrimalItem_WeaponBaseClub_C_ExecuteUbergraph_PrimalItem_WeaponBaseClub_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
