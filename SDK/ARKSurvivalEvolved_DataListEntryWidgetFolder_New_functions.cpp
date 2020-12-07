// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListEntryWidgetFolder_New_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DataListEntryWidgetFolder_New.DataListEntryWidgetFolder_New_C.ExecuteUbergraph_DataListEntryWidgetFolder_New
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDataListEntryWidgetFolder_New_C::ExecuteUbergraph_DataListEntryWidgetFolder_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetFolder_New.DataListEntryWidgetFolder_New_C.ExecuteUbergraph_DataListEntryWidgetFolder_New");

	UDataListEntryWidgetFolder_New_C_ExecuteUbergraph_DataListEntryWidgetFolder_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
