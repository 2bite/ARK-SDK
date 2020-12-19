// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ZipAnchorImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ZipAnchorImpactEmitter.ZipAnchorImpactEmitter_C.UserConstructionScript
// ()

void AZipAnchorImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipAnchorImpactEmitter.ZipAnchorImpactEmitter_C.UserConstructionScript");

	AZipAnchorImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZipAnchorImpactEmitter.ZipAnchorImpactEmitter_C.ExecuteUbergraph_ZipAnchorImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AZipAnchorImpactEmitter_C::ExecuteUbergraph_ZipAnchorImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipAnchorImpactEmitter.ZipAnchorImpactEmitter_C.ExecuteUbergraph_ZipAnchorImpactEmitter");

	AZipAnchorImpactEmitter_C_ExecuteUbergraph_ZipAnchorImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
