// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PoisonGasEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PoisonGasEmitter.PoisonGasEmitter_C.UserConstructionScript
// ()

void APoisonGasEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonGasEmitter.PoisonGasEmitter_C.UserConstructionScript");

	APoisonGasEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoisonGasEmitter.PoisonGasEmitter_C.ExecuteUbergraph_PoisonGasEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APoisonGasEmitter_C::ExecuteUbergraph_PoisonGasEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonGasEmitter.PoisonGasEmitter_C.ExecuteUbergraph_PoisonGasEmitter");

	APoisonGasEmitter_C_ExecuteUbergraph_PoisonGasEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
