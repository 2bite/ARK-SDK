// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossTeleporter_Spider_Hard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BossTeleporter_Spider_Hard.BossTeleporter_Spider_Hard_C.UserConstructionScript
// ()

void ABossTeleporter_Spider_Hard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossTeleporter_Spider_Hard.BossTeleporter_Spider_Hard_C.UserConstructionScript");

	ABossTeleporter_Spider_Hard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossTeleporter_Spider_Hard.BossTeleporter_Spider_Hard_C.ExecuteUbergraph_BossTeleporter_Spider_Hard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABossTeleporter_Spider_Hard_C::ExecuteUbergraph_BossTeleporter_Spider_Hard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossTeleporter_Spider_Hard.BossTeleporter_Spider_Hard_C.ExecuteUbergraph_BossTeleporter_Spider_Hard");

	ABossTeleporter_Spider_Hard_C_ExecuteUbergraph_BossTeleporter_Spider_Hard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
