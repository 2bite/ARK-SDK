// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemDye_Orange_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemDye_Orange.PrimalItemDye_Orange_C.ExecuteUbergraph_PrimalItemDye_Orange
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemDye_Orange_C::ExecuteUbergraph_PrimalItemDye_Orange(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemDye_Orange.PrimalItemDye_Orange_C.ExecuteUbergraph_PrimalItemDye_Orange");

	UPrimalItemDye_Orange_C_ExecuteUbergraph_PrimalItemDye_Orange_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
