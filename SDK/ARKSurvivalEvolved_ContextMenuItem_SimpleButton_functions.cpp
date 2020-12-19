// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ContextMenuItem_SimpleButton_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ContextMenuItem_SimpleButton.ContextMenuItem_SimpleButton_C.ExecuteUbergraph_ContextMenuItem_SimpleButton
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UContextMenuItem_SimpleButton_C::ExecuteUbergraph_ContextMenuItem_SimpleButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenuItem_SimpleButton.ContextMenuItem_SimpleButton_C.ExecuteUbergraph_ContextMenuItem_SimpleButton");

	UContextMenuItem_SimpleButton_C_ExecuteUbergraph_ContextMenuItem_SimpleButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
