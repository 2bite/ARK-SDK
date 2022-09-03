// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_tekgeneratorEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function tekgeneratorEmitter.TekGeneratorEmitter_C.UserConstructionScript
// ()

void ATekGeneratorEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function tekgeneratorEmitter.TekGeneratorEmitter_C.UserConstructionScript");

	ATekGeneratorEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function tekgeneratorEmitter.TekGeneratorEmitter_C.ExecuteUbergraph_TekGeneratorEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekGeneratorEmitter_C::ExecuteUbergraph_TekGeneratorEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function tekgeneratorEmitter.TekGeneratorEmitter_C.ExecuteUbergraph_TekGeneratorEmitter");

	ATekGeneratorEmitter_C_ExecuteUbergraph_TekGeneratorEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
