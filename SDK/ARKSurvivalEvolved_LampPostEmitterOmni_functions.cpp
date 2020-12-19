// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LampPostEmitterOmni_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LampPostEmitterOmni.LampPostEmitterOmni_C.UserConstructionScript
// ()

void ALampPostEmitterOmni_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPostEmitterOmni.LampPostEmitterOmni_C.UserConstructionScript");

	ALampPostEmitterOmni_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LampPostEmitterOmni.LampPostEmitterOmni_C.ExecuteUbergraph_LampPostEmitterOmni
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALampPostEmitterOmni_C::ExecuteUbergraph_LampPostEmitterOmni(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPostEmitterOmni.LampPostEmitterOmni_C.ExecuteUbergraph_LampPostEmitterOmni");

	ALampPostEmitterOmni_C_ExecuteUbergraph_LampPostEmitterOmni_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
