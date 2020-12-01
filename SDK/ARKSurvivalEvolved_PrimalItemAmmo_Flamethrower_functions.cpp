// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_Flamethrower_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_Flamethrower.PrimalItemAmmo_Flamethrower_C.ExecuteUbergraph_PrimalItemAmmo_Flamethrower
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_Flamethrower_C::ExecuteUbergraph_PrimalItemAmmo_Flamethrower(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_Flamethrower.PrimalItemAmmo_Flamethrower_C.ExecuteUbergraph_PrimalItemAmmo_Flamethrower");

	UPrimalItemAmmo_Flamethrower_C_ExecuteUbergraph_PrimalItemAmmo_Flamethrower_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
