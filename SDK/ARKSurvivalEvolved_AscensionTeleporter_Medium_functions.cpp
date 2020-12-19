// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AscensionTeleporter_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AscensionTeleporter_Medium.AscensionTeleporter_Medium_C.UserConstructionScript
// ()

void AAscensionTeleporter_Medium_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AscensionTeleporter_Medium.AscensionTeleporter_Medium_C.UserConstructionScript");

	AAscensionTeleporter_Medium_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AscensionTeleporter_Medium.AscensionTeleporter_Medium_C.ExecuteUbergraph_AscensionTeleporter_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAscensionTeleporter_Medium_C::ExecuteUbergraph_AscensionTeleporter_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AscensionTeleporter_Medium.AscensionTeleporter_Medium_C.ExecuteUbergraph_AscensionTeleporter_Medium");

	AAscensionTeleporter_Medium_C_ExecuteUbergraph_AscensionTeleporter_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
