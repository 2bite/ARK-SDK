// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AscensionTeleporter_Easy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AscensionTeleporter_Easy.AscensionTeleporter_Easy_C.UserConstructionScript
// ()

void AAscensionTeleporter_Easy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AscensionTeleporter_Easy.AscensionTeleporter_Easy_C.UserConstructionScript");

	AAscensionTeleporter_Easy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AscensionTeleporter_Easy.AscensionTeleporter_Easy_C.ExecuteUbergraph_AscensionTeleporter_Easy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAscensionTeleporter_Easy_C::ExecuteUbergraph_AscensionTeleporter_Easy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AscensionTeleporter_Easy.AscensionTeleporter_Easy_C.ExecuteUbergraph_AscensionTeleporter_Easy");

	AAscensionTeleporter_Easy_C_ExecuteUbergraph_AscensionTeleporter_Easy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
