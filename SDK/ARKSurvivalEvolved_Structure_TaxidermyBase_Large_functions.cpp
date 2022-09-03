// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_TaxidermyBase_Large_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Structure_TaxidermyBase_Large.Structure_TaxidermyBase_Large_C.UserConstructionScript
// ()

void AStructure_TaxidermyBase_Large_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase_Large.Structure_TaxidermyBase_Large_C.UserConstructionScript");

	AStructure_TaxidermyBase_Large_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase_Large.Structure_TaxidermyBase_Large_C.ExecuteUbergraph_Structure_TaxidermyBase_Large
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TaxidermyBase_Large_C::ExecuteUbergraph_Structure_TaxidermyBase_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase_Large.Structure_TaxidermyBase_Large_C.ExecuteUbergraph_Structure_TaxidermyBase_Large");

	AStructure_TaxidermyBase_Large_C_ExecuteUbergraph_Structure_TaxidermyBase_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
