// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_FishBasket_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_FishBasket.PrimalItemStructure_FishBasket_C.ExecuteUbergraph_PrimalItemStructure_FishBasket
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_FishBasket_C::ExecuteUbergraph_PrimalItemStructure_FishBasket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_FishBasket.PrimalItemStructure_FishBasket_C.ExecuteUbergraph_PrimalItemStructure_FishBasket");

	UPrimalItemStructure_FishBasket_C_ExecuteUbergraph_PrimalItemStructure_FishBasket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
