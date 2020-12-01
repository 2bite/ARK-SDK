// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_TaxidermyBase_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Structure_TaxidermyBase_Medium.Structure_TaxidermyBase_Medium_C.UserConstructionScript
// ()

void AStructure_TaxidermyBase_Medium_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase_Medium.Structure_TaxidermyBase_Medium_C.UserConstructionScript");

	AStructure_TaxidermyBase_Medium_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase_Medium.Structure_TaxidermyBase_Medium_C.ExecuteUbergraph_Structure_TaxidermyBase_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TaxidermyBase_Medium_C::ExecuteUbergraph_Structure_TaxidermyBase_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase_Medium.Structure_TaxidermyBase_Medium_C.ExecuteUbergraph_Structure_TaxidermyBase_Medium");

	AStructure_TaxidermyBase_Medium_C_ExecuteUbergraph_Structure_TaxidermyBase_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
