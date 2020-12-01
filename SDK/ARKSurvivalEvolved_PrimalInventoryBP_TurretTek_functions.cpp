// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TurretTek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TurretTek.PrimalInventoryBP_TurretTek_C.ExecuteUbergraph_PrimalInventoryBP_TurretTek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TurretTek_C::ExecuteUbergraph_PrimalInventoryBP_TurretTek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TurretTek.PrimalInventoryBP_TurretTek_C.ExecuteUbergraph_PrimalInventoryBP_TurretTek");

	UPrimalInventoryBP_TurretTek_C_ExecuteUbergraph_PrimalInventoryBP_TurretTek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
