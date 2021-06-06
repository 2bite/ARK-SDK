// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekLightEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekLightEmitter.TekLightEmitter_C.UserConstructionScript
// ()

void ATekLightEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekLightEmitter.TekLightEmitter_C.UserConstructionScript");

	ATekLightEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekLightEmitter.TekLightEmitter_C.ExecuteUbergraph_TekLightEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekLightEmitter_C::ExecuteUbergraph_TekLightEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekLightEmitter.TekLightEmitter_C.ExecuteUbergraph_TekLightEmitter");

	ATekLightEmitter_C_ExecuteUbergraph_TekLightEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
