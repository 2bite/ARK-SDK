// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossArenaManager_Desert_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BossArenaManager_Desert.BossArenaManager_Desert_C.SpawnedBoss
// ()
// Parameters:
// class APrimalDinoCharacter**   Boss                           (Parm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_Desert_C::SpawnedBoss(class APrimalDinoCharacter** Boss)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_Desert.BossArenaManager_Desert_C.SpawnedBoss");

	ABossArenaManager_Desert_C_SpawnedBoss_Params params;
	params.Boss = Boss;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_Desert.BossArenaManager_Desert_C.IssueReturnWarning
// ()

void ABossArenaManager_Desert_C::IssueReturnWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_Desert.BossArenaManager_Desert_C.IssueReturnWarning");

	ABossArenaManager_Desert_C_IssueReturnWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_Desert.BossArenaManager_Desert_C.UserConstructionScript
// ()

void ABossArenaManager_Desert_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_Desert.BossArenaManager_Desert_C.UserConstructionScript");

	ABossArenaManager_Desert_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_Desert.BossArenaManager_Desert_C.ExecuteUbergraph_BossArenaManager_Desert
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_Desert_C::ExecuteUbergraph_BossArenaManager_Desert(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_Desert.BossArenaManager_Desert_C.ExecuteUbergraph_BossArenaManager_Desert");

	ABossArenaManager_Desert_C_ExecuteUbergraph_BossArenaManager_Desert_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
