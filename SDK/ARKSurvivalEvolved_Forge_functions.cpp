// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Forge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Forge.Forge_C.UserConstructionScript
// ()

void AForge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Forge.Forge_C.UserConstructionScript");

	AForge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Forge.Forge_C.ExecuteUbergraph_Forge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AForge_C::ExecuteUbergraph_Forge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Forge.Forge_C.ExecuteUbergraph_Forge");

	AForge_C_ExecuteUbergraph_Forge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
