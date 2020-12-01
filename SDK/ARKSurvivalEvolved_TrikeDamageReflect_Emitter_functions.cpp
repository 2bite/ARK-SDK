// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TrikeDamageReflect_Emitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TrikeDamageReflect_Emitter.TrikeDamageReflect_Emitter_C.UserConstructionScript
// ()

void ATrikeDamageReflect_Emitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrikeDamageReflect_Emitter.TrikeDamageReflect_Emitter_C.UserConstructionScript");

	ATrikeDamageReflect_Emitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrikeDamageReflect_Emitter.TrikeDamageReflect_Emitter_C.ExecuteUbergraph_TrikeDamageReflect_Emitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATrikeDamageReflect_Emitter_C::ExecuteUbergraph_TrikeDamageReflect_Emitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrikeDamageReflect_Emitter.TrikeDamageReflect_Emitter_C.ExecuteUbergraph_TrikeDamageReflect_Emitter");

	ATrikeDamageReflect_Emitter_C_ExecuteUbergraph_TrikeDamageReflect_Emitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
