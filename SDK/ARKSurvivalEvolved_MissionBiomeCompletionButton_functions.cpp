// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionBiomeCompletionButton_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionBiomeCompletionButton.MissionBiomeCompletionButton_C.ExecuteUbergraph_MissionBiomeCompletionButton
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMissionBiomeCompletionButton_C::ExecuteUbergraph_MissionBiomeCompletionButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBiomeCompletionButton.MissionBiomeCompletionButton_C.ExecuteUbergraph_MissionBiomeCompletionButton");

	UMissionBiomeCompletionButton_C_ExecuteUbergraph_MissionBiomeCompletionButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
