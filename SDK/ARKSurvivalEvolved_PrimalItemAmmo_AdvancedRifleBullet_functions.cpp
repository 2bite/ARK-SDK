// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_AdvancedRifleBullet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_AdvancedRifleBullet.PrimalItemAmmo_AdvancedRifleBullet_C.ExecuteUbergraph_PrimalItemAmmo_AdvancedRifleBullet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_AdvancedRifleBullet_C::ExecuteUbergraph_PrimalItemAmmo_AdvancedRifleBullet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_AdvancedRifleBullet.PrimalItemAmmo_AdvancedRifleBullet_C.ExecuteUbergraph_PrimalItemAmmo_AdvancedRifleBullet");

	UPrimalItemAmmo_AdvancedRifleBullet_C_ExecuteUbergraph_PrimalItemAmmo_AdvancedRifleBullet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
