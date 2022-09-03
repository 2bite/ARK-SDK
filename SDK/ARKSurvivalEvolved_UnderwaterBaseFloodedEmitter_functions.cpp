// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_UnderwaterBaseFloodedEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UnderwaterBaseFloodedEmitter.UnderwaterBaseFloodedEmitter_C.UserConstructionScript
// ()

void AUnderwaterBaseFloodedEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnderwaterBaseFloodedEmitter.UnderwaterBaseFloodedEmitter_C.UserConstructionScript");

	AUnderwaterBaseFloodedEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnderwaterBaseFloodedEmitter.UnderwaterBaseFloodedEmitter_C.ExecuteUbergraph_UnderwaterBaseFloodedEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AUnderwaterBaseFloodedEmitter_C::ExecuteUbergraph_UnderwaterBaseFloodedEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnderwaterBaseFloodedEmitter.UnderwaterBaseFloodedEmitter_C.ExecuteUbergraph_UnderwaterBaseFloodedEmitter");

	AUnderwaterBaseFloodedEmitter_C_ExecuteUbergraph_UnderwaterBaseFloodedEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
