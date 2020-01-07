// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MainMenu_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MainMenu.MainMenu_C.K2Node_MatineeController_1_MatineeEvent
// ()

void AMainMenu_C::K2Node_MatineeController_1_MatineeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.K2Node_MatineeController_1_MatineeEvent");

	AMainMenu_C_K2Node_MatineeController_1_MatineeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.K2Node_MatineeController_1_Finished
// ()

void AMainMenu_C::K2Node_MatineeController_1_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.K2Node_MatineeController_1_Finished");

	AMainMenu_C_K2Node_MatineeController_1_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.ReceiveBeginPlay
// ()

void AMainMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ReceiveBeginPlay");

	AMainMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMainMenu_C::ExecuteUbergraph_MainMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu");

	AMainMenu_C_ExecuteUbergraph_MainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
