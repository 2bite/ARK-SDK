// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GeneratorEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GeneratorEmitter.GeneratorEmitter_C.UserConstructionScript
// ()

void AGeneratorEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneratorEmitter.GeneratorEmitter_C.UserConstructionScript");

	AGeneratorEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneratorEmitter.GeneratorEmitter_C.ExecuteUbergraph_GeneratorEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGeneratorEmitter_C::ExecuteUbergraph_GeneratorEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneratorEmitter.GeneratorEmitter_C.ExecuteUbergraph_GeneratorEmitter");

	AGeneratorEmitter_C_ExecuteUbergraph_GeneratorEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
