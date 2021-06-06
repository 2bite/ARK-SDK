// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ContextMenuItem_Spinner_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ContextMenuItem_Spinner.ContextMenuItem_Spinner_C.ExecuteUbergraph_ContextMenuItem_Spinner
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UContextMenuItem_Spinner_C::ExecuteUbergraph_ContextMenuItem_Spinner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenuItem_Spinner.ContextMenuItem_Spinner_C.ExecuteUbergraph_ContextMenuItem_Spinner");

	UContextMenuItem_Spinner_C_ExecuteUbergraph_ContextMenuItem_Spinner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
