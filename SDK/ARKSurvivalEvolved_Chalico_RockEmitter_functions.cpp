// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Chalico_RockEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Chalico_RockEmitter.Chalico_RockEmitter_C.UserConstructionScript
// ()

void AChalico_RockEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_RockEmitter.Chalico_RockEmitter_C.UserConstructionScript");

	AChalico_RockEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_RockEmitter.Chalico_RockEmitter_C.ExecuteUbergraph_Chalico_RockEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AChalico_RockEmitter_C::ExecuteUbergraph_Chalico_RockEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_RockEmitter.Chalico_RockEmitter_C.ExecuteUbergraph_Chalico_RockEmitter");

	AChalico_RockEmitter_C_ExecuteUbergraph_Chalico_RockEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
