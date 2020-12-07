// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SnowTreeHarvestEmitter_CanopyMed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SnowTreeHarvestEmitter_CanopyMed.SnowTreeHarvestEmitter_CanopyMed_C.UserConstructionScript
// ()

void ASnowTreeHarvestEmitter_CanopyMed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SnowTreeHarvestEmitter_CanopyMed.SnowTreeHarvestEmitter_CanopyMed_C.UserConstructionScript");

	ASnowTreeHarvestEmitter_CanopyMed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SnowTreeHarvestEmitter_CanopyMed.SnowTreeHarvestEmitter_CanopyMed_C.ExecuteUbergraph_SnowTreeHarvestEmitter_CanopyMed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASnowTreeHarvestEmitter_CanopyMed_C::ExecuteUbergraph_SnowTreeHarvestEmitter_CanopyMed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SnowTreeHarvestEmitter_CanopyMed.SnowTreeHarvestEmitter_CanopyMed_C.ExecuteUbergraph_SnowTreeHarvestEmitter_CanopyMed");

	ASnowTreeHarvestEmitter_CanopyMed_C_ExecuteUbergraph_SnowTreeHarvestEmitter_CanopyMed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
