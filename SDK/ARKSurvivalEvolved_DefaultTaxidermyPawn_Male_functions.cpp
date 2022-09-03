// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DefaultTaxidermyPawn_Male_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DefaultTaxidermyPawn_Male.DefaultTaxidermyPawn_Male_C.UserConstructionScript
// ()

void ADefaultTaxidermyPawn_Male_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultTaxidermyPawn_Male.DefaultTaxidermyPawn_Male_C.UserConstructionScript");

	ADefaultTaxidermyPawn_Male_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultTaxidermyPawn_Male.DefaultTaxidermyPawn_Male_C.ExecuteUbergraph_DefaultTaxidermyPawn_Male
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADefaultTaxidermyPawn_Male_C::ExecuteUbergraph_DefaultTaxidermyPawn_Male(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultTaxidermyPawn_Male.DefaultTaxidermyPawn_Male_C.ExecuteUbergraph_DefaultTaxidermyPawn_Male");

	ADefaultTaxidermyPawn_Male_C_ExecuteUbergraph_DefaultTaxidermyPawn_Male_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
