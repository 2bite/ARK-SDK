// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_HeavyTurret_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_HeavyTurret.PrimalInventoryBP_HeavyTurret_C.ExecuteUbergraph_PrimalInventoryBP_HeavyTurret
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_HeavyTurret_C::ExecuteUbergraph_PrimalInventoryBP_HeavyTurret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_HeavyTurret.PrimalInventoryBP_HeavyTurret_C.ExecuteUbergraph_PrimalInventoryBP_HeavyTurret");

	UPrimalInventoryBP_HeavyTurret_C_ExecuteUbergraph_PrimalInventoryBP_HeavyTurret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
