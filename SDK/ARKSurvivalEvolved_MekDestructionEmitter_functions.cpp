// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MekDestructionEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MekDestructionEmitter.MekDestructionEmitter_C.UserConstructionScript
// ()

void AMekDestructionEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MekDestructionEmitter.MekDestructionEmitter_C.UserConstructionScript");

	AMekDestructionEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MekDestructionEmitter.MekDestructionEmitter_C.ExecuteUbergraph_MekDestructionEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMekDestructionEmitter_C::ExecuteUbergraph_MekDestructionEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MekDestructionEmitter.MekDestructionEmitter_C.ExecuteUbergraph_MekDestructionEmitter");

	AMekDestructionEmitter_C_ExecuteUbergraph_MekDestructionEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
