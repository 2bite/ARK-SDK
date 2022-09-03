// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FireplaceEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FireplaceEmitter.FireplaceEmitter_C.UserConstructionScript
// ()

void AFireplaceEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireplaceEmitter.FireplaceEmitter_C.UserConstructionScript");

	AFireplaceEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireplaceEmitter.FireplaceEmitter_C.ExecuteUbergraph_FireplaceEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFireplaceEmitter_C::ExecuteUbergraph_FireplaceEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireplaceEmitter.FireplaceEmitter_C.ExecuteUbergraph_FireplaceEmitter");

	AFireplaceEmitter_C_ExecuteUbergraph_FireplaceEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
