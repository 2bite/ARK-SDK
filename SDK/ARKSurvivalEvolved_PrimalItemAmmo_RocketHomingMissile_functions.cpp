// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_RocketHomingMissile_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_RocketHomingMissile.PrimalItemAmmo_RocketHomingMissile_C.ExecuteUbergraph_PrimalItemAmmo_RocketHomingMissile
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_RocketHomingMissile_C::ExecuteUbergraph_PrimalItemAmmo_RocketHomingMissile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_RocketHomingMissile.PrimalItemAmmo_RocketHomingMissile_C.ExecuteUbergraph_PrimalItemAmmo_RocketHomingMissile");

	UPrimalItemAmmo_RocketHomingMissile_C_ExecuteUbergraph_PrimalItemAmmo_RocketHomingMissile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
