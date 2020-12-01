// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndbossSpiderAcidSpit_TrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndbossSpiderAcidSpit_TrailEmitter.EndbossSpiderAcidSpit_TrailEmitter_C.UserConstructionScript
// ()

void AEndbossSpiderAcidSpit_TrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndbossSpiderAcidSpit_TrailEmitter.EndbossSpiderAcidSpit_TrailEmitter_C.UserConstructionScript");

	AEndbossSpiderAcidSpit_TrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndbossSpiderAcidSpit_TrailEmitter.EndbossSpiderAcidSpit_TrailEmitter_C.ExecuteUbergraph_EndbossSpiderAcidSpit_TrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndbossSpiderAcidSpit_TrailEmitter_C::ExecuteUbergraph_EndbossSpiderAcidSpit_TrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndbossSpiderAcidSpit_TrailEmitter.EndbossSpiderAcidSpit_TrailEmitter_C.ExecuteUbergraph_EndbossSpiderAcidSpit_TrailEmitter");

	AEndbossSpiderAcidSpit_TrailEmitter_C_ExecuteUbergraph_EndbossSpiderAcidSpit_TrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
