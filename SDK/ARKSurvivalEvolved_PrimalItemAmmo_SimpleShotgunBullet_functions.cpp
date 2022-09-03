// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_SimpleShotgunBullet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_SimpleShotgunBullet.PrimalItemAmmo_SimpleShotgunBullet_C.ExecuteUbergraph_PrimalItemAmmo_SimpleShotgunBullet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_SimpleShotgunBullet_C::ExecuteUbergraph_PrimalItemAmmo_SimpleShotgunBullet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_SimpleShotgunBullet.PrimalItemAmmo_SimpleShotgunBullet_C.ExecuteUbergraph_PrimalItemAmmo_SimpleShotgunBullet");

	UPrimalItemAmmo_SimpleShotgunBullet_C_ExecuteUbergraph_PrimalItemAmmo_SimpleShotgunBullet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
