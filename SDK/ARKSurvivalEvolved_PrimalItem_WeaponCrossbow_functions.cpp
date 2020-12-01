// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponCrossbow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponCrossbow.PrimalItem_WeaponCrossbow_C.ExecuteUbergraph_PrimalItem_WeaponCrossbow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponCrossbow_C::ExecuteUbergraph_PrimalItem_WeaponCrossbow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponCrossbow.PrimalItem_WeaponCrossbow_C.ExecuteUbergraph_PrimalItem_WeaponCrossbow");

	UPrimalItem_WeaponCrossbow_C_ExecuteUbergraph_PrimalItem_WeaponCrossbow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
