// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Fibers_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_Fibers.PrimalItemResource_Fibers_C.ExecuteUbergraph_PrimalItemResource_Fibers
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Fibers_C::ExecuteUbergraph_PrimalItemResource_Fibers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Fibers.PrimalItemResource_Fibers_C.ExecuteUbergraph_PrimalItemResource_Fibers");

	UPrimalItemResource_Fibers_C_ExecuteUbergraph_PrimalItemResource_Fibers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
