// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponAlarmTrap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponAlarmTrap.PrimalItem_WeaponAlarmTrap_C.ExecuteUbergraph_PrimalItem_WeaponAlarmTrap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponAlarmTrap_C::ExecuteUbergraph_PrimalItem_WeaponAlarmTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponAlarmTrap.PrimalItem_WeaponAlarmTrap_C.ExecuteUbergraph_PrimalItem_WeaponAlarmTrap");

	UPrimalItem_WeaponAlarmTrap_C_ExecuteUbergraph_PrimalItem_WeaponAlarmTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
