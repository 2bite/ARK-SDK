// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossArenaManager_Gorilla_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BossArenaManager_Gorilla.BossArenaManager_Gorilla_C.UserConstructionScript
// ()

void ABossArenaManager_Gorilla_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_Gorilla.BossArenaManager_Gorilla_C.UserConstructionScript");

	ABossArenaManager_Gorilla_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_Gorilla.BossArenaManager_Gorilla_C.ExecuteUbergraph_BossArenaManager_Gorilla
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_Gorilla_C::ExecuteUbergraph_BossArenaManager_Gorilla(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_Gorilla.BossArenaManager_Gorilla_C.ExecuteUbergraph_BossArenaManager_Gorilla");

	ABossArenaManager_Gorilla_C_ExecuteUbergraph_BossArenaManager_Gorilla_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
