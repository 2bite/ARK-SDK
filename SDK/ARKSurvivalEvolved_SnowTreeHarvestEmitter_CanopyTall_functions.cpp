// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SnowTreeHarvestEmitter_CanopyTall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SnowTreeHarvestEmitter_CanopyTall.SnowTreeHarvestEmitter_CanopyTall_C.UserConstructionScript
// ()

void ASnowTreeHarvestEmitter_CanopyTall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SnowTreeHarvestEmitter_CanopyTall.SnowTreeHarvestEmitter_CanopyTall_C.UserConstructionScript");

	ASnowTreeHarvestEmitter_CanopyTall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SnowTreeHarvestEmitter_CanopyTall.SnowTreeHarvestEmitter_CanopyTall_C.ExecuteUbergraph_SnowTreeHarvestEmitter_CanopyTall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASnowTreeHarvestEmitter_CanopyTall_C::ExecuteUbergraph_SnowTreeHarvestEmitter_CanopyTall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SnowTreeHarvestEmitter_CanopyTall.SnowTreeHarvestEmitter_CanopyTall_C.ExecuteUbergraph_SnowTreeHarvestEmitter_CanopyTall");

	ASnowTreeHarvestEmitter_CanopyTall_C_ExecuteUbergraph_SnowTreeHarvestEmitter_CanopyTall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
