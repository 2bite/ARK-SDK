// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossTeleporter_Gorilla_Easy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BossTeleporter_Gorilla_Easy.BossTeleporter_Gorilla_Easy_C.UserConstructionScript
// ()

void ABossTeleporter_Gorilla_Easy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossTeleporter_Gorilla_Easy.BossTeleporter_Gorilla_Easy_C.UserConstructionScript");

	ABossTeleporter_Gorilla_Easy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossTeleporter_Gorilla_Easy.BossTeleporter_Gorilla_Easy_C.ExecuteUbergraph_BossTeleporter_Gorilla_Easy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABossTeleporter_Gorilla_Easy_C::ExecuteUbergraph_BossTeleporter_Gorilla_Easy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossTeleporter_Gorilla_Easy.BossTeleporter_Gorilla_Easy_C.ExecuteUbergraph_BossTeleporter_Gorilla_Easy");

	ABossTeleporter_Gorilla_Easy_C_ExecuteUbergraph_BossTeleporter_Gorilla_Easy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
