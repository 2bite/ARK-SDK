// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BeerBarrel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_BeerBarrel.PrimalItemStructure_BeerBarrel_C.ExecuteUbergraph_PrimalItemStructure_BeerBarrel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_BeerBarrel_C::ExecuteUbergraph_PrimalItemStructure_BeerBarrel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_BeerBarrel.PrimalItemStructure_BeerBarrel_C.ExecuteUbergraph_PrimalItemStructure_BeerBarrel");

	UPrimalItemStructure_BeerBarrel_C_ExecuteUbergraph_PrimalItemStructure_BeerBarrel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
