// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossArenaManager_FZ_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BossArenaManager_FZ.BossArenaManager_FZ_C.SpawnedBoss
// ()
// Parameters:
// class APrimalDinoCharacter**   Boss                           (Parm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_FZ_C::SpawnedBoss(class APrimalDinoCharacter** Boss)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_FZ.BossArenaManager_FZ_C.SpawnedBoss");

	ABossArenaManager_FZ_C_SpawnedBoss_Params params;
	params.Boss = Boss;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_FZ.BossArenaManager_FZ_C.IssueReturnWarning
// ()

void ABossArenaManager_FZ_C::IssueReturnWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_FZ.BossArenaManager_FZ_C.IssueReturnWarning");

	ABossArenaManager_FZ_C_IssueReturnWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_FZ.BossArenaManager_FZ_C.UserConstructionScript
// ()

void ABossArenaManager_FZ_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_FZ.BossArenaManager_FZ_C.UserConstructionScript");

	ABossArenaManager_FZ_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_FZ.BossArenaManager_FZ_C.ExecuteUbergraph_BossArenaManager_FZ
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_FZ_C::ExecuteUbergraph_BossArenaManager_FZ(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_FZ.BossArenaManager_FZ_C.ExecuteUbergraph_BossArenaManager_FZ");

	ABossArenaManager_FZ_C_ExecuteUbergraph_BossArenaManager_FZ_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
