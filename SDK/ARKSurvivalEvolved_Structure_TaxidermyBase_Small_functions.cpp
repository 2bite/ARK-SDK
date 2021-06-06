// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_TaxidermyBase_Small_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Structure_TaxidermyBase_Small.Structure_TaxidermyBase_Small_C.UserConstructionScript
// ()

void AStructure_TaxidermyBase_Small_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase_Small.Structure_TaxidermyBase_Small_C.UserConstructionScript");

	AStructure_TaxidermyBase_Small_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase_Small.Structure_TaxidermyBase_Small_C.ExecuteUbergraph_Structure_TaxidermyBase_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TaxidermyBase_Small_C::ExecuteUbergraph_Structure_TaxidermyBase_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase_Small.Structure_TaxidermyBase_Small_C.ExecuteUbergraph_Structure_TaxidermyBase_Small");

	AStructure_TaxidermyBase_Small_C_ExecuteUbergraph_Structure_TaxidermyBase_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
