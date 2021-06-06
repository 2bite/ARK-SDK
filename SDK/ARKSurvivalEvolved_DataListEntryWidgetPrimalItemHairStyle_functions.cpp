// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListEntryWidgetPrimalItemHairStyle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DataListEntryWidgetPrimalItemHairStyle.DataListEntryWidgetPrimalItemHairStyle_C.ExecuteUbergraph_DataListEntryWidgetPrimalItemHairStyle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDataListEntryWidgetPrimalItemHairStyle_C::ExecuteUbergraph_DataListEntryWidgetPrimalItemHairStyle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetPrimalItemHairStyle.DataListEntryWidgetPrimalItemHairStyle_C.ExecuteUbergraph_DataListEntryWidgetPrimalItemHairStyle");

	UDataListEntryWidgetPrimalItemHairStyle_C_ExecuteUbergraph_DataListEntryWidgetPrimalItemHairStyle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
