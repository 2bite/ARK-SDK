// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_SimpleBullet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_SimpleBullet.PrimalItemAmmo_SimpleBullet_C.ExecuteUbergraph_PrimalItemAmmo_SimpleBullet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_SimpleBullet_C::ExecuteUbergraph_PrimalItemAmmo_SimpleBullet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_SimpleBullet.PrimalItemAmmo_SimpleBullet_C.ExecuteUbergraph_PrimalItemAmmo_SimpleBullet");

	UPrimalItemAmmo_SimpleBullet_C_ExecuteUbergraph_PrimalItemAmmo_SimpleBullet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
