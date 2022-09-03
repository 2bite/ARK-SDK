// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EggHatchEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EggHatchEmitter.EggHatchEmitter_C.UserConstructionScript
// ()

void AEggHatchEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EggHatchEmitter.EggHatchEmitter_C.UserConstructionScript");

	AEggHatchEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggHatchEmitter.EggHatchEmitter_C.ExecuteUbergraph_EggHatchEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEggHatchEmitter_C::ExecuteUbergraph_EggHatchEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggHatchEmitter.EggHatchEmitter_C.ExecuteUbergraph_EggHatchEmitter");

	AEggHatchEmitter_C_ExecuteUbergraph_EggHatchEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
