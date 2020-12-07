// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoGroupsUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoGroupsUI.DinoGroupsUI_C.ExecuteUbergraph_DinoGroupsUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoGroupsUI_C::ExecuteUbergraph_DinoGroupsUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoGroupsUI.DinoGroupsUI_C.ExecuteUbergraph_DinoGroupsUI");

	UDinoGroupsUI_C_ExecuteUbergraph_DinoGroupsUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
