// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_CorruptedWood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_CorruptedWood.PrimalItemResource_CorruptedWood_C.ExecuteUbergraph_PrimalItemResource_CorruptedWood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_CorruptedWood_C::ExecuteUbergraph_PrimalItemResource_CorruptedWood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_CorruptedWood.PrimalItemResource_CorruptedWood_C.ExecuteUbergraph_PrimalItemResource_CorruptedWood");

	UPrimalItemResource_CorruptedWood_C_ExecuteUbergraph_PrimalItemResource_CorruptedWood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
