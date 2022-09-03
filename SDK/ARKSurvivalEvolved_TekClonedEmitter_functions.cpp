// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekClonedEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekClonedEmitter.TekClonedEmitter_C.UserConstructionScript
// ()

void ATekClonedEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekClonedEmitter.TekClonedEmitter_C.UserConstructionScript");

	ATekClonedEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekClonedEmitter.TekClonedEmitter_C.ExecuteUbergraph_TekClonedEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekClonedEmitter_C::ExecuteUbergraph_TekClonedEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekClonedEmitter.TekClonedEmitter_C.ExecuteUbergraph_TekClonedEmitter");

	ATekClonedEmitter_C_ExecuteUbergraph_TekClonedEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
