// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionTimeRemainingWidget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionTimeRemainingWidget.MissionTimeRemainingWidget_C.ExecuteUbergraph_MissionTimeRemainingWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMissionTimeRemainingWidget_C::ExecuteUbergraph_MissionTimeRemainingWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTimeRemainingWidget.MissionTimeRemainingWidget_C.ExecuteUbergraph_MissionTimeRemainingWidget");

	UMissionTimeRemainingWidget_C_ExecuteUbergraph_MissionTimeRemainingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
