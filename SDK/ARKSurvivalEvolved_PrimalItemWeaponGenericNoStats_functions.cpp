// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemWeaponGenericNoStats_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemWeaponGenericNoStats.PrimalItemWeaponGenericNoStats_C.ExecuteUbergraph_PrimalItemWeaponGenericNoStats
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemWeaponGenericNoStats_C::ExecuteUbergraph_PrimalItemWeaponGenericNoStats(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemWeaponGenericNoStats.PrimalItemWeaponGenericNoStats_C.ExecuteUbergraph_PrimalItemWeaponGenericNoStats");

	UPrimalItemWeaponGenericNoStats_C_ExecuteUbergraph_PrimalItemWeaponGenericNoStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
