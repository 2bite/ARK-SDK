// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossTeleporter_Spider_Easy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BossTeleporter_Spider_Easy.BossTeleporter_Spider_Easy_C.UserConstructionScript
// ()

void ABossTeleporter_Spider_Easy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossTeleporter_Spider_Easy.BossTeleporter_Spider_Easy_C.UserConstructionScript");

	ABossTeleporter_Spider_Easy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossTeleporter_Spider_Easy.BossTeleporter_Spider_Easy_C.ExecuteUbergraph_BossTeleporter_Spider_Easy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABossTeleporter_Spider_Easy_C::ExecuteUbergraph_BossTeleporter_Spider_Easy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossTeleporter_Spider_Easy.BossTeleporter_Spider_Easy_C.ExecuteUbergraph_BossTeleporter_Spider_Easy");

	ABossTeleporter_Spider_Easy_C_ExecuteUbergraph_BossTeleporter_Spider_Easy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
