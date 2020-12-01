// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpiderAcidSpit_TrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpiderAcidSpit_TrailEmitter.SpiderAcidSpit_TrailEmitter_C.UserConstructionScript
// ()

void ASpiderAcidSpit_TrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpiderAcidSpit_TrailEmitter.SpiderAcidSpit_TrailEmitter_C.UserConstructionScript");

	ASpiderAcidSpit_TrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpiderAcidSpit_TrailEmitter.SpiderAcidSpit_TrailEmitter_C.ExecuteUbergraph_SpiderAcidSpit_TrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpiderAcidSpit_TrailEmitter_C::ExecuteUbergraph_SpiderAcidSpit_TrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpiderAcidSpit_TrailEmitter.SpiderAcidSpit_TrailEmitter_C.ExecuteUbergraph_SpiderAcidSpit_TrailEmitter");

	ASpiderAcidSpit_TrailEmitter_C_ExecuteUbergraph_SpiderAcidSpit_TrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
