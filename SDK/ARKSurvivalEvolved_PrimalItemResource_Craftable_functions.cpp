// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Craftable_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_Craftable.PrimalItemResource_Craftable_C.ExecuteUbergraph_PrimalItemResource_Craftable
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Craftable_C::ExecuteUbergraph_PrimalItemResource_Craftable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Craftable.PrimalItemResource_Craftable_C.ExecuteUbergraph_PrimalItemResource_Craftable");

	UPrimalItemResource_Craftable_C_ExecuteUbergraph_PrimalItemResource_Craftable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
