// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Gem_Fertile_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_Gem_Fertile.PrimalItemResource_Gem_Fertile_C.ExecuteUbergraph_PrimalItemResource_Gem_Fertile
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Gem_Fertile_C::ExecuteUbergraph_PrimalItemResource_Gem_Fertile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Gem_Fertile.PrimalItemResource_Gem_Fertile_C.ExecuteUbergraph_PrimalItemResource_Gem_Fertile");

	UPrimalItemResource_Gem_Fertile_C_ExecuteUbergraph_PrimalItemResource_Gem_Fertile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
