// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ShardRefined_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ShardRefined.PrimalItemResource_ShardRefined_C.ExecuteUbergraph_PrimalItemResource_ShardRefined
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ShardRefined_C::ExecuteUbergraph_PrimalItemResource_ShardRefined(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ShardRefined.PrimalItemResource_ShardRefined_C.ExecuteUbergraph_PrimalItemResource_ShardRefined");

	UPrimalItemResource_ShardRefined_C_ExecuteUbergraph_PrimalItemResource_ShardRefined_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
