// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldBuffEntryUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WorldBuffEntryUI.WorldBuffEntryUI_C.ExecuteUbergraph_WorldBuffEntryUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWorldBuffEntryUI_C::ExecuteUbergraph_WorldBuffEntryUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldBuffEntryUI.WorldBuffEntryUI_C.ExecuteUbergraph_WorldBuffEntryUI");

	UWorldBuffEntryUI_C_ExecuteUbergraph_WorldBuffEntryUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
