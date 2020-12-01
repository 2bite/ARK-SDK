// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossTeleporter_Gorilla_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BossTeleporter_Gorilla.BossTeleporter_Gorilla_C.UserConstructionScript
// ()

void ABossTeleporter_Gorilla_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossTeleporter_Gorilla.BossTeleporter_Gorilla_C.UserConstructionScript");

	ABossTeleporter_Gorilla_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossTeleporter_Gorilla.BossTeleporter_Gorilla_C.ExecuteUbergraph_BossTeleporter_Gorilla
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABossTeleporter_Gorilla_C::ExecuteUbergraph_BossTeleporter_Gorilla(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossTeleporter_Gorilla.BossTeleporter_Gorilla_C.ExecuteUbergraph_BossTeleporter_Gorilla");

	ABossTeleporter_Gorilla_C_ExecuteUbergraph_BossTeleporter_Gorilla_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
