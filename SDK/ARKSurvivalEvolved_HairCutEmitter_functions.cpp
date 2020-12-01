// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HairCutEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HairCutEmitter.HairCutEmitter_C.UserConstructionScript
// ()

void AHairCutEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HairCutEmitter.HairCutEmitter_C.UserConstructionScript");

	AHairCutEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HairCutEmitter.HairCutEmitter_C.ExecuteUbergraph_HairCutEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AHairCutEmitter_C::ExecuteUbergraph_HairCutEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HairCutEmitter.HairCutEmitter_C.ExecuteUbergraph_HairCutEmitter");

	AHairCutEmitter_C_ExecuteUbergraph_HairCutEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
