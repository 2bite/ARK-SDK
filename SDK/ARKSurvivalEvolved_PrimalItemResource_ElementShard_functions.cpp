// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ElementShard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.ExecuteUbergraph_PrimalItemResource_ElementShard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ElementShard_C::ExecuteUbergraph_PrimalItemResource_ElementShard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.ExecuteUbergraph_PrimalItemResource_ElementShard");

	UPrimalItemResource_ElementShard_C_ExecuteUbergraph_PrimalItemResource_ElementShard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
