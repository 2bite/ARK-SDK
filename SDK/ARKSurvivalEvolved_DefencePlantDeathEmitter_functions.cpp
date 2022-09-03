// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DefencePlantDeathEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DefencePlantDeathEmitter.DefencePlantDeathEmitter_C.UserConstructionScript
// ()

void ADefencePlantDeathEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefencePlantDeathEmitter.DefencePlantDeathEmitter_C.UserConstructionScript");

	ADefencePlantDeathEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefencePlantDeathEmitter.DefencePlantDeathEmitter_C.ExecuteUbergraph_DefencePlantDeathEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADefencePlantDeathEmitter_C::ExecuteUbergraph_DefencePlantDeathEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefencePlantDeathEmitter.DefencePlantDeathEmitter_C.ExecuteUbergraph_DefencePlantDeathEmitter");

	ADefencePlantDeathEmitter_C_ExecuteUbergraph_DefencePlantDeathEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
