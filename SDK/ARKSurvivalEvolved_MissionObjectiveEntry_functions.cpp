// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionObjectiveEntry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionObjectiveEntry.MissionObjectiveEntry_C.ExecuteUbergraph_MissionObjectiveEntry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMissionObjectiveEntry_C::ExecuteUbergraph_MissionObjectiveEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveEntry.MissionObjectiveEntry_C.ExecuteUbergraph_MissionObjectiveEntry");

	UMissionObjectiveEntry_C_ExecuteUbergraph_MissionObjectiveEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
