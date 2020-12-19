// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ContextMenuItem_SortButton_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ContextMenuItem_SortButton.ContextMenuItem_SortButton_C.ExecuteUbergraph_ContextMenuItem_SortButton
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UContextMenuItem_SortButton_C::ExecuteUbergraph_ContextMenuItem_SortButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenuItem_SortButton.ContextMenuItem_SortButton_C.ExecuteUbergraph_ContextMenuItem_SortButton");

	UContextMenuItem_SortButton_C_ExecuteUbergraph_ContextMenuItem_SortButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
