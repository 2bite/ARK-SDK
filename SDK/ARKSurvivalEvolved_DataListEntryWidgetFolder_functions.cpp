// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListEntryWidgetFolder_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DataListEntryWidgetFolder.DataListEntryWidgetFolder_C.ExecuteUbergraph_DataListEntryWidgetFolder
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDataListEntryWidgetFolder_C::ExecuteUbergraph_DataListEntryWidgetFolder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetFolder.DataListEntryWidgetFolder_C.ExecuteUbergraph_DataListEntryWidgetFolder");

	UDataListEntryWidgetFolder_C_ExecuteUbergraph_DataListEntryWidgetFolder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
