// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_Styracosaurus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_Styracosaurus.PrimalItemCostume_Styracosaurus_C.ExecuteUbergraph_PrimalItemCostume_Styracosaurus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_Styracosaurus_C::ExecuteUbergraph_PrimalItemCostume_Styracosaurus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_Styracosaurus.PrimalItemCostume_Styracosaurus_C.ExecuteUbergraph_PrimalItemCostume_Styracosaurus");

	UPrimalItemCostume_Styracosaurus_C_ExecuteUbergraph_PrimalItemCostume_Styracosaurus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
