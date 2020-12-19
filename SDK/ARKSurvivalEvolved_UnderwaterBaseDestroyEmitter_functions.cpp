// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_UnderwaterBaseDestroyEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UnderwaterBaseDestroyEmitter.UnderwaterBaseDestroyEmitter_C.UserConstructionScript
// ()

void AUnderwaterBaseDestroyEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnderwaterBaseDestroyEmitter.UnderwaterBaseDestroyEmitter_C.UserConstructionScript");

	AUnderwaterBaseDestroyEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnderwaterBaseDestroyEmitter.UnderwaterBaseDestroyEmitter_C.ExecuteUbergraph_UnderwaterBaseDestroyEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AUnderwaterBaseDestroyEmitter_C::ExecuteUbergraph_UnderwaterBaseDestroyEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnderwaterBaseDestroyEmitter.UnderwaterBaseDestroyEmitter_C.ExecuteUbergraph_UnderwaterBaseDestroyEmitter");

	AUnderwaterBaseDestroyEmitter_C_ExecuteUbergraph_UnderwaterBaseDestroyEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
