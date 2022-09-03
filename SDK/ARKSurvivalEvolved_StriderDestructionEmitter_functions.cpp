// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StriderDestructionEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StriderDestructionEmitter.StriderDestructionEmitter_C.UserConstructionScript
// ()

void AStriderDestructionEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderDestructionEmitter.StriderDestructionEmitter_C.UserConstructionScript");

	AStriderDestructionEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderDestructionEmitter.StriderDestructionEmitter_C.ExecuteUbergraph_StriderDestructionEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStriderDestructionEmitter_C::ExecuteUbergraph_StriderDestructionEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderDestructionEmitter.StriderDestructionEmitter_C.ExecuteUbergraph_StriderDestructionEmitter");

	AStriderDestructionEmitter_C_ExecuteUbergraph_StriderDestructionEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
