// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemDye_Silver_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemDye_Silver.PrimalItemDye_Silver_C.ExecuteUbergraph_PrimalItemDye_Silver
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemDye_Silver_C::ExecuteUbergraph_PrimalItemDye_Silver(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemDye_Silver.PrimalItemDye_Silver_C.ExecuteUbergraph_PrimalItemDye_Silver");

	UPrimalItemDye_Silver_C_ExecuteUbergraph_PrimalItemDye_Silver_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
