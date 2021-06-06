// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemDye_Yellow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemDye_Yellow.PrimalItemDye_Yellow_C.ExecuteUbergraph_PrimalItemDye_Yellow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemDye_Yellow_C::ExecuteUbergraph_PrimalItemDye_Yellow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemDye_Yellow.PrimalItemDye_Yellow_C.ExecuteUbergraph_PrimalItemDye_Yellow");

	UPrimalItemDye_Yellow_C_ExecuteUbergraph_PrimalItemDye_Yellow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
