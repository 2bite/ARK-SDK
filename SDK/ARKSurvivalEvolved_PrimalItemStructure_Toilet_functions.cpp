// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Toilet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Toilet.PrimalItemStructure_Toilet_C.ExecuteUbergraph_PrimalItemStructure_Toilet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Toilet_C::ExecuteUbergraph_PrimalItemStructure_Toilet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Toilet.PrimalItemStructure_Toilet_C.ExecuteUbergraph_PrimalItemStructure_Toilet");

	UPrimalItemStructure_Toilet_C_ExecuteUbergraph_PrimalItemStructure_Toilet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
