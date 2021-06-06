// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_AdvancedBullet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_AdvancedBullet.PrimalItemAmmo_AdvancedBullet_C.ExecuteUbergraph_PrimalItemAmmo_AdvancedBullet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_AdvancedBullet_C::ExecuteUbergraph_PrimalItemAmmo_AdvancedBullet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_AdvancedBullet.PrimalItemAmmo_AdvancedBullet_C.ExecuteUbergraph_PrimalItemAmmo_AdvancedBullet");

	UPrimalItemAmmo_AdvancedBullet_C_ExecuteUbergraph_PrimalItemAmmo_AdvancedBullet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
