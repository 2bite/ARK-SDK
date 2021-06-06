// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_Brachiosaurus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_Brachiosaurus.PrimalItemCostume_Brachiosaurus_C.ExecuteUbergraph_PrimalItemCostume_Brachiosaurus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_Brachiosaurus_C::ExecuteUbergraph_PrimalItemCostume_Brachiosaurus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_Brachiosaurus.PrimalItemCostume_Brachiosaurus_C.ExecuteUbergraph_PrimalItemCostume_Brachiosaurus");

	UPrimalItemCostume_Brachiosaurus_C_ExecuteUbergraph_PrimalItemCostume_Brachiosaurus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
