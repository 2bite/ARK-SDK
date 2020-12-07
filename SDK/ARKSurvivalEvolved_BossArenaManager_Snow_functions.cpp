// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossArenaManager_Snow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BossArenaManager_Snow.BossArenaManager_Snow_C.SpawnedBoss
// ()
// Parameters:
// class APrimalDinoCharacter**   Boss                           (Parm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_Snow_C::SpawnedBoss(class APrimalDinoCharacter** Boss)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_Snow.BossArenaManager_Snow_C.SpawnedBoss");

	ABossArenaManager_Snow_C_SpawnedBoss_Params params;
	params.Boss = Boss;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_Snow.BossArenaManager_Snow_C.IssueReturnWarning
// ()

void ABossArenaManager_Snow_C::IssueReturnWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_Snow.BossArenaManager_Snow_C.IssueReturnWarning");

	ABossArenaManager_Snow_C_IssueReturnWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_Snow.BossArenaManager_Snow_C.UserConstructionScript
// ()

void ABossArenaManager_Snow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_Snow.BossArenaManager_Snow_C.UserConstructionScript");

	ABossArenaManager_Snow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_Snow.BossArenaManager_Snow_C.ExecuteUbergraph_BossArenaManager_Snow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_Snow_C::ExecuteUbergraph_BossArenaManager_Snow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_Snow.BossArenaManager_Snow_C.ExecuteUbergraph_BossArenaManager_Snow");

	ABossArenaManager_Snow_C_ExecuteUbergraph_BossArenaManager_Snow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
