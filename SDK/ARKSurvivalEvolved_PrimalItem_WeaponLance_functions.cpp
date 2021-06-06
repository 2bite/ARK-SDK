// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponLance_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponLance.PrimalItem_WeaponLance_C.ExecuteUbergraph_PrimalItem_WeaponLance
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponLance_C::ExecuteUbergraph_PrimalItem_WeaponLance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponLance.PrimalItem_WeaponLance_C.ExecuteUbergraph_PrimalItem_WeaponLance");

	UPrimalItem_WeaponLance_C_ExecuteUbergraph_PrimalItem_WeaponLance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
