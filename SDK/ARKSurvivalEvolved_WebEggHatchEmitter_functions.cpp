// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WebEggHatchEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WebEggHatchEmitter.WebEggHatchEmitter_C.UserConstructionScript
// ()

void AWebEggHatchEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebEggHatchEmitter.WebEggHatchEmitter_C.UserConstructionScript");

	AWebEggHatchEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebEggHatchEmitter.WebEggHatchEmitter_C.ExecuteUbergraph_WebEggHatchEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWebEggHatchEmitter_C::ExecuteUbergraph_WebEggHatchEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebEggHatchEmitter.WebEggHatchEmitter_C.ExecuteUbergraph_WebEggHatchEmitter");

	AWebEggHatchEmitter_C_ExecuteUbergraph_WebEggHatchEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
