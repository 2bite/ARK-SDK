// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ShieldEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShieldEmitter.ShieldEmitter_C.UserConstructionScript
// ()

void AShieldEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShieldEmitter.ShieldEmitter_C.UserConstructionScript");

	AShieldEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShieldEmitter.ShieldEmitter_C.ExecuteUbergraph_ShieldEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AShieldEmitter_C::ExecuteUbergraph_ShieldEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShieldEmitter.ShieldEmitter_C.ExecuteUbergraph_ShieldEmitter");

	AShieldEmitter_C_ExecuteUbergraph_ShieldEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
