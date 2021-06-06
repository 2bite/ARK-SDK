// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionModule_zSubmodule_CompanionReaction_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionModule_zSubmodule_CompanionReaction_Base.MissionModule_zSubmodule_CompanionReaction_Base_C.HandleMissionModuleBegin
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMissionModule_zSubmodule_CompanionReaction_Base_C::HandleMissionModuleBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionModule_zSubmodule_CompanionReaction_Base.MissionModule_zSubmodule_CompanionReaction_Base_C.HandleMissionModuleBegin");

	UMissionModule_zSubmodule_CompanionReaction_Base_C_HandleMissionModuleBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionModule_zSubmodule_CompanionReaction_Base.MissionModule_zSubmodule_CompanionReaction_Base_C.TriggerMissionModuleBegin
// ()

void UMissionModule_zSubmodule_CompanionReaction_Base_C::TriggerMissionModuleBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionModule_zSubmodule_CompanionReaction_Base.MissionModule_zSubmodule_CompanionReaction_Base_C.TriggerMissionModuleBegin");

	UMissionModule_zSubmodule_CompanionReaction_Base_C_TriggerMissionModuleBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionModule_zSubmodule_CompanionReaction_Base.MissionModule_zSubmodule_CompanionReaction_Base_C.ExecuteUbergraph_MissionModule_zSubmodule_CompanionReaction_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMissionModule_zSubmodule_CompanionReaction_Base_C::ExecuteUbergraph_MissionModule_zSubmodule_CompanionReaction_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionModule_zSubmodule_CompanionReaction_Base.MissionModule_zSubmodule_CompanionReaction_Base_C.ExecuteUbergraph_MissionModule_zSubmodule_CompanionReaction_Base");

	UMissionModule_zSubmodule_CompanionReaction_Base_C_ExecuteUbergraph_MissionModule_zSubmodule_CompanionReaction_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
