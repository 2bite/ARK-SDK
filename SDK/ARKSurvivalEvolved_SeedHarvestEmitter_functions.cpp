// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SeedHarvestEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SeedHarvestEmitter.SeedHarvestEmitter_C.UserConstructionScript
// ()

void ASeedHarvestEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SeedHarvestEmitter.SeedHarvestEmitter_C.UserConstructionScript");

	ASeedHarvestEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SeedHarvestEmitter.SeedHarvestEmitter_C.ExecuteUbergraph_SeedHarvestEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASeedHarvestEmitter_C::ExecuteUbergraph_SeedHarvestEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SeedHarvestEmitter.SeedHarvestEmitter_C.ExecuteUbergraph_SeedHarvestEmitter");

	ASeedHarvestEmitter_C_ExecuteUbergraph_SeedHarvestEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
