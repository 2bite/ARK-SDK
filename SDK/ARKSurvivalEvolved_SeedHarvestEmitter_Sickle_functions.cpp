// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SeedHarvestEmitter_Sickle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SeedHarvestEmitter_Sickle.SeedHarvestEmitter_Sickle_C.UserConstructionScript
// ()

void ASeedHarvestEmitter_Sickle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SeedHarvestEmitter_Sickle.SeedHarvestEmitter_Sickle_C.UserConstructionScript");

	ASeedHarvestEmitter_Sickle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SeedHarvestEmitter_Sickle.SeedHarvestEmitter_Sickle_C.ExecuteUbergraph_SeedHarvestEmitter_Sickle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASeedHarvestEmitter_Sickle_C::ExecuteUbergraph_SeedHarvestEmitter_Sickle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SeedHarvestEmitter_Sickle.SeedHarvestEmitter_Sickle_C.ExecuteUbergraph_SeedHarvestEmitter_Sickle");

	ASeedHarvestEmitter_Sickle_C_ExecuteUbergraph_SeedHarvestEmitter_Sickle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
