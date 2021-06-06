// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponTransGPS_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponTransGPS.PrimalItem_WeaponTransGPS_C.ExecuteUbergraph_PrimalItem_WeaponTransGPS
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTransGPS_C::ExecuteUbergraph_PrimalItem_WeaponTransGPS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTransGPS.PrimalItem_WeaponTransGPS_C.ExecuteUbergraph_PrimalItem_WeaponTransGPS");

	UPrimalItem_WeaponTransGPS_C_ExecuteUbergraph_PrimalItem_WeaponTransGPS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
