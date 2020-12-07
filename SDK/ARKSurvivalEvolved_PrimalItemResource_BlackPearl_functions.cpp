// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_BlackPearl_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_BlackPearl.PrimalItemResource_BlackPearl_C.ExecuteUbergraph_PrimalItemResource_BlackPearl
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_BlackPearl_C::ExecuteUbergraph_PrimalItemResource_BlackPearl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_BlackPearl.PrimalItemResource_BlackPearl_C.ExecuteUbergraph_PrimalItemResource_BlackPearl");

	UPrimalItemResource_BlackPearl_C_ExecuteUbergraph_PrimalItemResource_BlackPearl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
