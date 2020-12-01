// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemDye_Cyan_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemDye_Cyan.PrimalItemDye_Cyan_C.ExecuteUbergraph_PrimalItemDye_Cyan
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemDye_Cyan_C::ExecuteUbergraph_PrimalItemDye_Cyan(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemDye_Cyan.PrimalItemDye_Cyan_C.ExecuteUbergraph_PrimalItemDye_Cyan");

	UPrimalItemDye_Cyan_C_ExecuteUbergraph_PrimalItemDye_Cyan_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
