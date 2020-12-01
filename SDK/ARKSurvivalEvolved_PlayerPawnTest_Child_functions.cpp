// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlayerPawnTest_Child_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerPawnTest_Child.PlayerPawnTest_Child_C.UserConstructionScript
// ()

void APlayerPawnTest_Child_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest_Child.PlayerPawnTest_Child_C.UserConstructionScript");

	APlayerPawnTest_Child_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnTest_Child.PlayerPawnTest_Child_C.ExecuteUbergraph_PlayerPawnTest_Child
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnTest_Child_C::ExecuteUbergraph_PlayerPawnTest_Child(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest_Child.PlayerPawnTest_Child_C.ExecuteUbergraph_PlayerPawnTest_Child");

	APlayerPawnTest_Child_C_ExecuteUbergraph_PlayerPawnTest_Child_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
