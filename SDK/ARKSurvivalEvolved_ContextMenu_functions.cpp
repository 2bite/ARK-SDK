// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ContextMenu_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ContextMenu.ContextMenu_C.ExecuteUbergraph_ContextMenu
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UContextMenu_C::ExecuteUbergraph_ContextMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu.ContextMenu_C.ExecuteUbergraph_ContextMenu");

	UContextMenu_C_ExecuteUbergraph_ContextMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
