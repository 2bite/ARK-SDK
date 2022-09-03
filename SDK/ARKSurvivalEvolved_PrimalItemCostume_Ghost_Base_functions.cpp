// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_Ghost_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_Ghost_Base.PrimalItemCostume_Ghost_Base_C.ExecuteUbergraph_PrimalItemCostume_Ghost_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_Ghost_Base_C::ExecuteUbergraph_PrimalItemCostume_Ghost_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_Ghost_Base.PrimalItemCostume_Ghost_Base_C.ExecuteUbergraph_PrimalItemCostume_Ghost_Base");

	UPrimalItemCostume_Ghost_Base_C_ExecuteUbergraph_PrimalItemCostume_Ghost_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
