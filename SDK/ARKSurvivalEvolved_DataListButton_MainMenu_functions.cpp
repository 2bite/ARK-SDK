// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListButton_MainMenu_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DataListButton_MainMenu.DataListButton_MainMenu_C.ExecuteUbergraph_DataListButton_MainMenu
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDataListButton_MainMenu_C::ExecuteUbergraph_DataListButton_MainMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataListButton_MainMenu.DataListButton_MainMenu_C.ExecuteUbergraph_DataListButton_MainMenu");

	UDataListButton_MainMenu_C_ExecuteUbergraph_DataListButton_MainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
