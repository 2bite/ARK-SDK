// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossArenaManager_Forest_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BossArenaManager_Forest.BossArenaManager_Forest_C.SpawnedBoss
// ()
// Parameters:
// class APrimalDinoCharacter**   Boss                           (Parm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_Forest_C::SpawnedBoss(class APrimalDinoCharacter** Boss)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_Forest.BossArenaManager_Forest_C.SpawnedBoss");

	ABossArenaManager_Forest_C_SpawnedBoss_Params params;
	params.Boss = Boss;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_Forest.BossArenaManager_Forest_C.IssueReturnWarning
// ()

void ABossArenaManager_Forest_C::IssueReturnWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_Forest.BossArenaManager_Forest_C.IssueReturnWarning");

	ABossArenaManager_Forest_C_IssueReturnWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_Forest.BossArenaManager_Forest_C.UserConstructionScript
// ()

void ABossArenaManager_Forest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_Forest.BossArenaManager_Forest_C.UserConstructionScript");

	ABossArenaManager_Forest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_Forest.BossArenaManager_Forest_C.ExecuteUbergraph_BossArenaManager_Forest
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_Forest_C::ExecuteUbergraph_BossArenaManager_Forest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_Forest.BossArenaManager_Forest_C.ExecuteUbergraph_BossArenaManager_Forest");

	ABossArenaManager_Forest_C_ExecuteUbergraph_BossArenaManager_Forest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
