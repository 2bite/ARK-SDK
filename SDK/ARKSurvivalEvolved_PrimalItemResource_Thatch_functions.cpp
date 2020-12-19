// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Thatch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_Thatch.PrimalItemResource_Thatch_C.ExecuteUbergraph_PrimalItemResource_Thatch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Thatch_C::ExecuteUbergraph_PrimalItemResource_Thatch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Thatch.PrimalItemResource_Thatch_C.ExecuteUbergraph_PrimalItemResource_Thatch");

	UPrimalItemResource_Thatch_C_ExecuteUbergraph_PrimalItemResource_Thatch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
