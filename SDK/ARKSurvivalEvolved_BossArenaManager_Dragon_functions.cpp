// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossArenaManager_Dragon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BossArenaManager_Dragon.BossArenaManager_Dragon_C.UserConstructionScript
// ()

void ABossArenaManager_Dragon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_Dragon.BossArenaManager_Dragon_C.UserConstructionScript");

	ABossArenaManager_Dragon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_Dragon.BossArenaManager_Dragon_C.ExecuteUbergraph_BossArenaManager_Dragon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_Dragon_C::ExecuteUbergraph_BossArenaManager_Dragon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_Dragon.BossArenaManager_Dragon_C.ExecuteUbergraph_BossArenaManager_Dragon");

	ABossArenaManager_Dragon_C_ExecuteUbergraph_BossArenaManager_Dragon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
