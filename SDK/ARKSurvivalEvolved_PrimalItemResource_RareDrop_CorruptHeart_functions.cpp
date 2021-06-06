// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_RareDrop_CorruptHeart_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_RareDrop_CorruptHeart.PrimalItemResource_RareDrop_CorruptHeart_C.ExecuteUbergraph_PrimalItemResource_RareDrop_CorruptHeart
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_RareDrop_CorruptHeart_C::ExecuteUbergraph_PrimalItemResource_RareDrop_CorruptHeart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_RareDrop_CorruptHeart.PrimalItemResource_RareDrop_CorruptHeart_C.ExecuteUbergraph_PrimalItemResource_RareDrop_CorruptHeart");

	UPrimalItemResource_RareDrop_CorruptHeart_C_ExecuteUbergraph_PrimalItemResource_RareDrop_CorruptHeart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
