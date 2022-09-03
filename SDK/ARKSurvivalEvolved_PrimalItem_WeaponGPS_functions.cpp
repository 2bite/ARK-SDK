// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponGPS_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponGPS.PrimalItem_WeaponGPS_C.ExecuteUbergraph_PrimalItem_WeaponGPS
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponGPS_C::ExecuteUbergraph_PrimalItem_WeaponGPS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponGPS.PrimalItem_WeaponGPS_C.ExecuteUbergraph_PrimalItem_WeaponGPS");

	UPrimalItem_WeaponGPS_C_ExecuteUbergraph_PrimalItem_WeaponGPS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
