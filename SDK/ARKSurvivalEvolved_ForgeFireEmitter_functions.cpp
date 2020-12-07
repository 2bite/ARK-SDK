// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ForgeFireEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ForgeFireEmitter.ForgeFireEmitter_C.UserConstructionScript
// ()

void AForgeFireEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForgeFireEmitter.ForgeFireEmitter_C.UserConstructionScript");

	AForgeFireEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForgeFireEmitter.ForgeFireEmitter_C.ExecuteUbergraph_ForgeFireEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AForgeFireEmitter_C::ExecuteUbergraph_ForgeFireEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForgeFireEmitter.ForgeFireEmitter_C.ExecuteUbergraph_ForgeFireEmitter");

	AForgeFireEmitter_C_ExecuteUbergraph_ForgeFireEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
