// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ZipLineBreakEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ZipLineBreakEmitter.ZipLineBreakEmitter_C.UserConstructionScript
// ()

void AZipLineBreakEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipLineBreakEmitter.ZipLineBreakEmitter_C.UserConstructionScript");

	AZipLineBreakEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZipLineBreakEmitter.ZipLineBreakEmitter_C.ExecuteUbergraph_ZipLineBreakEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AZipLineBreakEmitter_C::ExecuteUbergraph_ZipLineBreakEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipLineBreakEmitter.ZipLineBreakEmitter_C.ExecuteUbergraph_ZipLineBreakEmitter");

	AZipLineBreakEmitter_C_ExecuteUbergraph_ZipLineBreakEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
