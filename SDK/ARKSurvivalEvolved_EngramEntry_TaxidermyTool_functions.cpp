// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TaxidermyTool_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TaxidermyTool.EngramEntry_TaxidermyTool_C.ExecuteUbergraph_EngramEntry_TaxidermyTool
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TaxidermyTool_C::ExecuteUbergraph_EngramEntry_TaxidermyTool(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TaxidermyTool.EngramEntry_TaxidermyTool_C.ExecuteUbergraph_EngramEntry_TaxidermyTool");

	UEngramEntry_TaxidermyTool_C_ExecuteUbergraph_EngramEntry_TaxidermyTool_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
