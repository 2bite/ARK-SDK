// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Electronics_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_Electronics.PrimalItemResource_Electronics_C.ExecuteUbergraph_PrimalItemResource_Electronics
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Electronics_C::ExecuteUbergraph_PrimalItemResource_Electronics(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Electronics.PrimalItemResource_Electronics_C.ExecuteUbergraph_PrimalItemResource_Electronics");

	UPrimalItemResource_Electronics_C_ExecuteUbergraph_PrimalItemResource_Electronics_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
