// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CampFireEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CampFireEmitter.CampFireEmitter_C.UserConstructionScript
// ()

void ACampFireEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CampFireEmitter.CampFireEmitter_C.UserConstructionScript");

	ACampFireEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampFireEmitter.CampFireEmitter_C.ExecuteUbergraph_CampFireEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACampFireEmitter_C::ExecuteUbergraph_CampFireEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CampFireEmitter.CampFireEmitter_C.ExecuteUbergraph_CampFireEmitter");

	ACampFireEmitter_C_ExecuteUbergraph_CampFireEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
