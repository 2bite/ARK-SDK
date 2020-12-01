// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTransGPSAmmo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTransGPSAmmo.PrimalItemTransGPSAmmo_C.ExecuteUbergraph_PrimalItemTransGPSAmmo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTransGPSAmmo_C::ExecuteUbergraph_PrimalItemTransGPSAmmo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTransGPSAmmo.PrimalItemTransGPSAmmo_C.ExecuteUbergraph_PrimalItemTransGPSAmmo");

	UPrimalItemTransGPSAmmo_C_ExecuteUbergraph_PrimalItemTransGPSAmmo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
