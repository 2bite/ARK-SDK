// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ConfirmationDialogGeneric_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.ExecuteUbergraph_ConfirmationDialogGeneric
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UConfirmationDialogGeneric_C::ExecuteUbergraph_ConfirmationDialogGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.ExecuteUbergraph_ConfirmationDialogGeneric");

	UConfirmationDialogGeneric_C_ExecuteUbergraph_ConfirmationDialogGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
