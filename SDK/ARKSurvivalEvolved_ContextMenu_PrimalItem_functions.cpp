// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ContextMenu_PrimalItem_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ContextMenu_PrimalItem.ContextMenu_PrimalItem_C.ExecuteUbergraph_ContextMenu_PrimalItem
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UContextMenu_PrimalItem_C::ExecuteUbergraph_ContextMenu_PrimalItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_PrimalItem.ContextMenu_PrimalItem_C.ExecuteUbergraph_ContextMenu_PrimalItem");

	UContextMenu_PrimalItem_C_ExecuteUbergraph_ContextMenu_PrimalItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
