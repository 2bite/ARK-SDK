// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TaxidermyBase_Small_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TaxidermyBase_Small.PrimalItemStructure_TaxidermyBase_Small_C.ExecuteUbergraph_PrimalItemStructure_TaxidermyBase_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TaxidermyBase_Small_C::ExecuteUbergraph_PrimalItemStructure_TaxidermyBase_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TaxidermyBase_Small.PrimalItemStructure_TaxidermyBase_Small_C.ExecuteUbergraph_PrimalItemStructure_TaxidermyBase_Small");

	UPrimalItemStructure_TaxidermyBase_Small_C_ExecuteUbergraph_PrimalItemStructure_TaxidermyBase_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
