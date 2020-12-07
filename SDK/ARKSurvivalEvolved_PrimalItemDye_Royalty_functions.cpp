// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemDye_Royalty_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemDye_Royalty.PrimalItemDye_Royalty_C.ExecuteUbergraph_PrimalItemDye_Royalty
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemDye_Royalty_C::ExecuteUbergraph_PrimalItemDye_Royalty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemDye_Royalty.PrimalItemDye_Royalty_C.ExecuteUbergraph_PrimalItemDye_Royalty");

	UPrimalItemDye_Royalty_C_ExecuteUbergraph_PrimalItemDye_Royalty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
