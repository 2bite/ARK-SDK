// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_CompostBin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_CompostBin.PrimalInventoryBP_CompostBin_C.ExecuteUbergraph_PrimalInventoryBP_CompostBin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_CompostBin_C::ExecuteUbergraph_PrimalInventoryBP_CompostBin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_CompostBin.PrimalInventoryBP_CompostBin_C.ExecuteUbergraph_PrimalInventoryBP_CompostBin");

	UPrimalInventoryBP_CompostBin_C_ExecuteUbergraph_PrimalInventoryBP_CompostBin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
