// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossTeleporter_Dragon_Easy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BossTeleporter_Dragon_Easy.BossTeleporter_Dragon_Easy_C.UserConstructionScript
// ()

void ABossTeleporter_Dragon_Easy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossTeleporter_Dragon_Easy.BossTeleporter_Dragon_Easy_C.UserConstructionScript");

	ABossTeleporter_Dragon_Easy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossTeleporter_Dragon_Easy.BossTeleporter_Dragon_Easy_C.ExecuteUbergraph_BossTeleporter_Dragon_Easy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABossTeleporter_Dragon_Easy_C::ExecuteUbergraph_BossTeleporter_Dragon_Easy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossTeleporter_Dragon_Easy.BossTeleporter_Dragon_Easy_C.ExecuteUbergraph_BossTeleporter_Dragon_Easy");

	ABossTeleporter_Dragon_Easy_C_ExecuteUbergraph_BossTeleporter_Dragon_Easy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
