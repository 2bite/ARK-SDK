// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekCloneStartEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekCloneStartEmitter.TekCloneStartEmitter_C.UserConstructionScript
// ()

void ATekCloneStartEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCloneStartEmitter.TekCloneStartEmitter_C.UserConstructionScript");

	ATekCloneStartEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCloneStartEmitter.TekCloneStartEmitter_C.ExecuteUbergraph_TekCloneStartEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekCloneStartEmitter_C::ExecuteUbergraph_TekCloneStartEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCloneStartEmitter.TekCloneStartEmitter_C.ExecuteUbergraph_TekCloneStartEmitter");

	ATekCloneStartEmitter_C_ExecuteUbergraph_TekCloneStartEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
