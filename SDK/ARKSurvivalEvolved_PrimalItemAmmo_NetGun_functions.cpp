// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_NetGun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_NetGun.PrimalItemAmmo_NetGun_C.ExecuteUbergraph_PrimalItemAmmo_NetGun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_NetGun_C::ExecuteUbergraph_PrimalItemAmmo_NetGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_NetGun.PrimalItemAmmo_NetGun_C.ExecuteUbergraph_PrimalItemAmmo_NetGun");

	UPrimalItemAmmo_NetGun_C_ExecuteUbergraph_PrimalItemAmmo_NetGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
