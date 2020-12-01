// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_EndBoss_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_EndBoss.DinoCharacterStatusComponent_BP_EndBoss_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_EndBoss
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_EndBoss_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_EndBoss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_EndBoss.DinoCharacterStatusComponent_BP_EndBoss_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_EndBoss");

	UDinoCharacterStatusComponent_BP_EndBoss_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_EndBoss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
