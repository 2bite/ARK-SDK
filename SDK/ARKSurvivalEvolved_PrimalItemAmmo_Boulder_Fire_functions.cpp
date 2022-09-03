// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_Boulder_Fire_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_Boulder_Fire.PrimalItemAmmo_Boulder_Fire_C.ExecuteUbergraph_PrimalItemAmmo_Boulder_Fire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_Boulder_Fire_C::ExecuteUbergraph_PrimalItemAmmo_Boulder_Fire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_Boulder_Fire.PrimalItemAmmo_Boulder_Fire_C.ExecuteUbergraph_PrimalItemAmmo_Boulder_Fire");

	UPrimalItemAmmo_Boulder_Fire_C_ExecuteUbergraph_PrimalItemAmmo_Boulder_Fire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
