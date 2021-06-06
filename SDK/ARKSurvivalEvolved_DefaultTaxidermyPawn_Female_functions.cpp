// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DefaultTaxidermyPawn_Female_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DefaultTaxidermyPawn_Female.DefaultTaxidermyPawn_Female_C.UserConstructionScript
// ()

void ADefaultTaxidermyPawn_Female_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultTaxidermyPawn_Female.DefaultTaxidermyPawn_Female_C.UserConstructionScript");

	ADefaultTaxidermyPawn_Female_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultTaxidermyPawn_Female.DefaultTaxidermyPawn_Female_C.ExecuteUbergraph_DefaultTaxidermyPawn_Female
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADefaultTaxidermyPawn_Female_C::ExecuteUbergraph_DefaultTaxidermyPawn_Female(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultTaxidermyPawn_Female.DefaultTaxidermyPawn_Female_C.ExecuteUbergraph_DefaultTaxidermyPawn_Female");

	ADefaultTaxidermyPawn_Female_C_ExecuteUbergraph_DefaultTaxidermyPawn_Female_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
