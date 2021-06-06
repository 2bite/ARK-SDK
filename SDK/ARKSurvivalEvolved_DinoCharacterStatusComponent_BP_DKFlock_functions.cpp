// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_DKFlock_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_DKFlock.DinoCharacterStatusComponent_BP_DKFlock_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_DKFlock
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_DKFlock_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_DKFlock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_DKFlock.DinoCharacterStatusComponent_BP_DKFlock_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_DKFlock");

	UDinoCharacterStatusComponent_BP_DKFlock_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_DKFlock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
