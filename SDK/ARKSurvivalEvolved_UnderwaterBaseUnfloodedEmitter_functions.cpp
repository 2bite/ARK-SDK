// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_UnderwaterBaseUnfloodedEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UnderwaterBaseUnfloodedEmitter.UnderwaterBaseUnfloodedEmitter_C.UserConstructionScript
// ()

void AUnderwaterBaseUnfloodedEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnderwaterBaseUnfloodedEmitter.UnderwaterBaseUnfloodedEmitter_C.UserConstructionScript");

	AUnderwaterBaseUnfloodedEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnderwaterBaseUnfloodedEmitter.UnderwaterBaseUnfloodedEmitter_C.ExecuteUbergraph_UnderwaterBaseUnfloodedEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AUnderwaterBaseUnfloodedEmitter_C::ExecuteUbergraph_UnderwaterBaseUnfloodedEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnderwaterBaseUnfloodedEmitter.UnderwaterBaseUnfloodedEmitter_C.ExecuteUbergraph_UnderwaterBaseUnfloodedEmitter");

	AUnderwaterBaseUnfloodedEmitter_C_ExecuteUbergraph_UnderwaterBaseUnfloodedEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
