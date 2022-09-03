// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_ExplosiveArrow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_ExplosiveArrow.PrimalItemAmmo_ExplosiveArrow_C.ExecuteUbergraph_PrimalItemAmmo_ExplosiveArrow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_ExplosiveArrow_C::ExecuteUbergraph_PrimalItemAmmo_ExplosiveArrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_ExplosiveArrow.PrimalItemAmmo_ExplosiveArrow_C.ExecuteUbergraph_PrimalItemAmmo_ExplosiveArrow");

	UPrimalItemAmmo_ExplosiveArrow_C_ExecuteUbergraph_PrimalItemAmmo_ExplosiveArrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
