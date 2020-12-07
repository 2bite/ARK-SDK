// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FireworkEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FireworkEmitter.FireworkEmitter_C.UserConstructionScript
// ()

void AFireworkEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireworkEmitter.FireworkEmitter_C.UserConstructionScript");

	AFireworkEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireworkEmitter.FireworkEmitter_C.ExecuteUbergraph_FireworkEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFireworkEmitter_C::ExecuteUbergraph_FireworkEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireworkEmitter.FireworkEmitter_C.ExecuteUbergraph_FireworkEmitter");

	AFireworkEmitter_C_ExecuteUbergraph_FireworkEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
