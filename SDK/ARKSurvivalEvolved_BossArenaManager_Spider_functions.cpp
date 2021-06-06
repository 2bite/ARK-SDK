// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossArenaManager_Spider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BossArenaManager_Spider.BossArenaManager_Spider_C.UserConstructionScript
// ()

void ABossArenaManager_Spider_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_Spider.BossArenaManager_Spider_C.UserConstructionScript");

	ABossArenaManager_Spider_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_Spider.BossArenaManager_Spider_C.ExecuteUbergraph_BossArenaManager_Spider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_Spider_C::ExecuteUbergraph_BossArenaManager_Spider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_Spider.BossArenaManager_Spider_C.ExecuteUbergraph_BossArenaManager_Spider");

	ABossArenaManager_Spider_C_ExecuteUbergraph_BossArenaManager_Spider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
