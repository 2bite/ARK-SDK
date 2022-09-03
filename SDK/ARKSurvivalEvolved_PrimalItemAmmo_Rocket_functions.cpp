// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_Rocket_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_Rocket.PrimalItemAmmo_Rocket_C.ExecuteUbergraph_PrimalItemAmmo_Rocket
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_Rocket_C::ExecuteUbergraph_PrimalItemAmmo_Rocket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_Rocket.PrimalItemAmmo_Rocket_C.ExecuteUbergraph_PrimalItemAmmo_Rocket");

	UPrimalItemAmmo_Rocket_C_ExecuteUbergraph_PrimalItemAmmo_Rocket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
