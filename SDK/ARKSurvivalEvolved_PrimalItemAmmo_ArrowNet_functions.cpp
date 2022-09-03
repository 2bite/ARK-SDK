// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_ArrowNet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_ArrowNet.PrimalItemAmmo_ArrowNet_C.ExecuteUbergraph_PrimalItemAmmo_ArrowNet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_ArrowNet_C::ExecuteUbergraph_PrimalItemAmmo_ArrowNet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_ArrowNet.PrimalItemAmmo_ArrowNet_C.ExecuteUbergraph_PrimalItemAmmo_ArrowNet");

	UPrimalItemAmmo_ArrowNet_C_ExecuteUbergraph_PrimalItemAmmo_ArrowNet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
