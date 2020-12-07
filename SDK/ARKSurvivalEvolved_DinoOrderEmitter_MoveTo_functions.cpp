// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoOrderEmitter_MoveTo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoOrderEmitter_MoveTo.DinoOrderEmitter_MoveTo_C.UserConstructionScript
// ()

void ADinoOrderEmitter_MoveTo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoOrderEmitter_MoveTo.DinoOrderEmitter_MoveTo_C.UserConstructionScript");

	ADinoOrderEmitter_MoveTo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoOrderEmitter_MoveTo.DinoOrderEmitter_MoveTo_C.ExecuteUbergraph_DinoOrderEmitter_MoveTo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADinoOrderEmitter_MoveTo_C::ExecuteUbergraph_DinoOrderEmitter_MoveTo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoOrderEmitter_MoveTo.DinoOrderEmitter_MoveTo_C.ExecuteUbergraph_DinoOrderEmitter_MoveTo");

	ADinoOrderEmitter_MoveTo_C_ExecuteUbergraph_DinoOrderEmitter_MoveTo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
