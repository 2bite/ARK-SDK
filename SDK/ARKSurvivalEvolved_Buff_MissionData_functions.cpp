// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MissionData_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MissionData.Buff_MissionData_C.UserConstructionScript
// ()

void ABuff_MissionData_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MissionData.Buff_MissionData_C.UserConstructionScript");

	ABuff_MissionData_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MissionData.Buff_MissionData_C.ReceiveBeginPlay
// ()

void ABuff_MissionData_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MissionData.Buff_MissionData_C.ReceiveBeginPlay");

	ABuff_MissionData_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MissionData.Buff_MissionData_C.OnPlayerRemovedFromMissionEvent
// ()
// Parameters:
// class APrimalBuff_MissionData* MissionDataBuff                (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionType*            Mission                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MissionData_C::OnPlayerRemovedFromMissionEvent(class APrimalBuff_MissionData* MissionDataBuff, class AMissionType* Mission, bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MissionData.Buff_MissionData_C.OnPlayerRemovedFromMissionEvent");

	ABuff_MissionData_C_OnPlayerRemovedFromMissionEvent_Params params;
	params.MissionDataBuff = MissionDataBuff;
	params.Mission = Mission;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MissionData.Buff_MissionData_C.OnPlayerAddedToMissionEvent
// ()
// Parameters:
// class APrimalBuff_MissionData* MissionDataBuff                (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionType*            Mission                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MissionData_C::OnPlayerAddedToMissionEvent(class APrimalBuff_MissionData* MissionDataBuff, class AMissionType* Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MissionData.Buff_MissionData_C.OnPlayerAddedToMissionEvent");

	ABuff_MissionData_C_OnPlayerAddedToMissionEvent_Params params;
	params.MissionDataBuff = MissionDataBuff;
	params.Mission = Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MissionData.Buff_MissionData_C.ExecuteUbergraph_Buff_MissionData
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MissionData_C::ExecuteUbergraph_Buff_MissionData(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MissionData.Buff_MissionData_C.ExecuteUbergraph_Buff_MissionData");

	ABuff_MissionData_C_ExecuteUbergraph_Buff_MissionData_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
