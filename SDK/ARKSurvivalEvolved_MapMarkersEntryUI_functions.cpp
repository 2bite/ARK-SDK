// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MapMarkersEntryUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MapMarkersEntryUI.MapMarkersEntryUI_C.ExecuteUbergraph_MapMarkersEntryUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMapMarkersEntryUI_C::ExecuteUbergraph_MapMarkersEntryUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarkersEntryUI.MapMarkersEntryUI_C.ExecuteUbergraph_MapMarkersEntryUI");

	UMapMarkersEntryUI_C_ExecuteUbergraph_MapMarkersEntryUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
