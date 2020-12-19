// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemDye_Magenta_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemDye_Magenta.PrimalItemDye_Magenta_C.ExecuteUbergraph_PrimalItemDye_Magenta
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemDye_Magenta_C::ExecuteUbergraph_PrimalItemDye_Magenta(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemDye_Magenta.PrimalItemDye_Magenta_C.ExecuteUbergraph_PrimalItemDye_Magenta");

	UPrimalItemDye_Magenta_C_ExecuteUbergraph_PrimalItemDye_Magenta_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
