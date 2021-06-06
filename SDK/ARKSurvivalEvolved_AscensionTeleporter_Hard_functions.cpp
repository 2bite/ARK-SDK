// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AscensionTeleporter_Hard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AscensionTeleporter_Hard.AscensionTeleporter_Hard_C.UserConstructionScript
// ()

void AAscensionTeleporter_Hard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AscensionTeleporter_Hard.AscensionTeleporter_Hard_C.UserConstructionScript");

	AAscensionTeleporter_Hard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AscensionTeleporter_Hard.AscensionTeleporter_Hard_C.ExecuteUbergraph_AscensionTeleporter_Hard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAscensionTeleporter_Hard_C::ExecuteUbergraph_AscensionTeleporter_Hard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AscensionTeleporter_Hard.AscensionTeleporter_Hard_C.ExecuteUbergraph_AscensionTeleporter_Hard");

	AAscensionTeleporter_Hard_C_ExecuteUbergraph_AscensionTeleporter_Hard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
