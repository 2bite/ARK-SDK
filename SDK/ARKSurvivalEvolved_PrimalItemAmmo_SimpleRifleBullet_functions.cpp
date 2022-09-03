// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_SimpleRifleBullet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_SimpleRifleBullet.PrimalItemAmmo_SimpleRifleBullet_C.ExecuteUbergraph_PrimalItemAmmo_SimpleRifleBullet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_SimpleRifleBullet_C::ExecuteUbergraph_PrimalItemAmmo_SimpleRifleBullet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_SimpleRifleBullet.PrimalItemAmmo_SimpleRifleBullet_C.ExecuteUbergraph_PrimalItemAmmo_SimpleRifleBullet");

	UPrimalItemAmmo_SimpleRifleBullet_C_ExecuteUbergraph_PrimalItemAmmo_SimpleRifleBullet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
