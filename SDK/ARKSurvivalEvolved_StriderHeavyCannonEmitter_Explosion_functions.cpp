// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StriderHeavyCannonEmitter_Explosion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StriderHeavyCannonEmitter_Explosion.StriderHeavyCannonEmitter_Explosion_C.UserConstructionScript
// ()

void AStriderHeavyCannonEmitter_Explosion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHeavyCannonEmitter_Explosion.StriderHeavyCannonEmitter_Explosion_C.UserConstructionScript");

	AStriderHeavyCannonEmitter_Explosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHeavyCannonEmitter_Explosion.StriderHeavyCannonEmitter_Explosion_C.ExecuteUbergraph_StriderHeavyCannonEmitter_Explosion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStriderHeavyCannonEmitter_Explosion_C::ExecuteUbergraph_StriderHeavyCannonEmitter_Explosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHeavyCannonEmitter_Explosion.StriderHeavyCannonEmitter_Explosion_C.ExecuteUbergraph_StriderHeavyCannonEmitter_Explosion");

	AStriderHeavyCannonEmitter_Explosion_C_ExecuteUbergraph_StriderHeavyCannonEmitter_Explosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
