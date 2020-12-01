// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_MortarAndPestle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_MortarAndPestle.PrimalInventoryBP_MortarAndPestle_C.ExecuteUbergraph_PrimalInventoryBP_MortarAndPestle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_MortarAndPestle_C::ExecuteUbergraph_PrimalInventoryBP_MortarAndPestle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_MortarAndPestle.PrimalInventoryBP_MortarAndPestle_C.ExecuteUbergraph_PrimalInventoryBP_MortarAndPestle");

	UPrimalInventoryBP_MortarAndPestle_C_ExecuteUbergraph_PrimalInventoryBP_MortarAndPestle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
