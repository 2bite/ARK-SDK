// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_RareFlower_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_RareFlower.PrimalItemResource_RareFlower_C.ExecuteUbergraph_PrimalItemResource_RareFlower
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_RareFlower_C::ExecuteUbergraph_PrimalItemResource_RareFlower(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_RareFlower.PrimalItemResource_RareFlower_C.ExecuteUbergraph_PrimalItemResource_RareFlower");

	UPrimalItemResource_RareFlower_C_ExecuteUbergraph_PrimalItemResource_RareFlower_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
