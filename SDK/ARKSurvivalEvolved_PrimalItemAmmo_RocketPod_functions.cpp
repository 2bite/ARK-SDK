// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_RocketPod_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_RocketPod.PrimalItemAmmo_RocketPod_C.ExecuteUbergraph_PrimalItemAmmo_RocketPod
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_RocketPod_C::ExecuteUbergraph_PrimalItemAmmo_RocketPod(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_RocketPod.PrimalItemAmmo_RocketPod_C.ExecuteUbergraph_PrimalItemAmmo_RocketPod");

	UPrimalItemAmmo_RocketPod_C_ExecuteUbergraph_PrimalItemAmmo_RocketPod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
