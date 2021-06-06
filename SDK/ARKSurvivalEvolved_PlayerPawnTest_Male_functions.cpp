// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlayerPawnTest_Male_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerPawnTest_Male.PlayerPawnTest_Male_C.UserConstructionScript
// ()

void APlayerPawnTest_Male_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest_Male.PlayerPawnTest_Male_C.UserConstructionScript");

	APlayerPawnTest_Male_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnTest_Male.PlayerPawnTest_Male_C.ExecuteUbergraph_PlayerPawnTest_Male
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnTest_Male_C::ExecuteUbergraph_PlayerPawnTest_Male(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest_Male.PlayerPawnTest_Male_C.ExecuteUbergraph_PlayerPawnTest_Male");

	APlayerPawnTest_Male_C_ExecuteUbergraph_PlayerPawnTest_Male_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
