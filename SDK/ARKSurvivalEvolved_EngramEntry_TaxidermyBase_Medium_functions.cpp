// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TaxidermyBase_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TaxidermyBase_Medium.EngramEntry_TaxidermyBase_Medium_C.ExecuteUbergraph_EngramEntry_TaxidermyBase_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TaxidermyBase_Medium_C::ExecuteUbergraph_EngramEntry_TaxidermyBase_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TaxidermyBase_Medium.EngramEntry_TaxidermyBase_Medium_C.ExecuteUbergraph_EngramEntry_TaxidermyBase_Medium");

	UEngramEntry_TaxidermyBase_Medium_C_ExecuteUbergraph_EngramEntry_TaxidermyBase_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
