// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ContextMenuItem_SimpleCaption_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ContextMenuItem_SimpleCaption.ContextMenuItem_SimpleCaption_C.ExecuteUbergraph_ContextMenuItem_SimpleCaption
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UContextMenuItem_SimpleCaption_C::ExecuteUbergraph_ContextMenuItem_SimpleCaption(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenuItem_SimpleCaption.ContextMenuItem_SimpleCaption_C.ExecuteUbergraph_ContextMenuItem_SimpleCaption");

	UContextMenuItem_SimpleCaption_C_ExecuteUbergraph_ContextMenuItem_SimpleCaption_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
