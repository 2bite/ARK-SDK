// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemWeapon_StoresCharge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemWeapon_StoresCharge.PrimalItemWeapon_StoresCharge_C.ExecuteUbergraph_PrimalItemWeapon_StoresCharge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemWeapon_StoresCharge_C::ExecuteUbergraph_PrimalItemWeapon_StoresCharge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemWeapon_StoresCharge.PrimalItemWeapon_StoresCharge_C.ExecuteUbergraph_PrimalItemWeapon_StoresCharge");

	UPrimalItemWeapon_StoresCharge_C_ExecuteUbergraph_PrimalItemWeapon_StoresCharge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
