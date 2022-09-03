// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DefPlant_ProjectileEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DefPlant_ProjectileEmitter.DefPlant_ProjectileEmitter_C.UserConstructionScript
// ()

void ADefPlant_ProjectileEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefPlant_ProjectileEmitter.DefPlant_ProjectileEmitter_C.UserConstructionScript");

	ADefPlant_ProjectileEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefPlant_ProjectileEmitter.DefPlant_ProjectileEmitter_C.ExecuteUbergraph_DefPlant_ProjectileEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADefPlant_ProjectileEmitter_C::ExecuteUbergraph_DefPlant_ProjectileEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefPlant_ProjectileEmitter.DefPlant_ProjectileEmitter_C.ExecuteUbergraph_DefPlant_ProjectileEmitter");

	ADefPlant_ProjectileEmitter_C_ExecuteUbergraph_DefPlant_ProjectileEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
