// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MainMenuGameMode_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MainMenuGameMode.MainMenuGameMode_C.UserConstructionScript
// ()

void AMainMenuGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuGameMode.MainMenuGameMode_C.UserConstructionScript");

	AMainMenuGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuGameMode.MainMenuGameMode_C.ExecuteUbergraph_MainMenuGameMode
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMainMenuGameMode_C::ExecuteUbergraph_MainMenuGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuGameMode.MainMenuGameMode_C.ExecuteUbergraph_MainMenuGameMode");

	AMainMenuGameMode_C_ExecuteUbergraph_MainMenuGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
