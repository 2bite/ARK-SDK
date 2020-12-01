// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponSlingshot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponSlingshot.PrimalItem_WeaponSlingshot_C.ExecuteUbergraph_PrimalItem_WeaponSlingshot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponSlingshot_C::ExecuteUbergraph_PrimalItem_WeaponSlingshot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponSlingshot.PrimalItem_WeaponSlingshot_C.ExecuteUbergraph_PrimalItem_WeaponSlingshot");

	UPrimalItem_WeaponSlingshot_C_ExecuteUbergraph_PrimalItem_WeaponSlingshot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
