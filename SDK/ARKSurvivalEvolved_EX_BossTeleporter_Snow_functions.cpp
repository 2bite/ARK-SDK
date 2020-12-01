// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_BossTeleporter_Snow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EX_BossTeleporter_Snow.EX_BossTeleporter_Snow_C.UserConstructionScript
// ()

void AEX_BossTeleporter_Snow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossTeleporter_Snow.EX_BossTeleporter_Snow_C.UserConstructionScript");

	AEX_BossTeleporter_Snow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossTeleporter_Snow.EX_BossTeleporter_Snow_C.ExecuteUbergraph_EX_BossTeleporter_Snow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEX_BossTeleporter_Snow_C::ExecuteUbergraph_EX_BossTeleporter_Snow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossTeleporter_Snow.EX_BossTeleporter_Snow_C.ExecuteUbergraph_EX_BossTeleporter_Snow");

	AEX_BossTeleporter_Snow_C_ExecuteUbergraph_EX_BossTeleporter_Snow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif