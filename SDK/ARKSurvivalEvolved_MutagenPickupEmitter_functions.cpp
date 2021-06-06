// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MutagenPickupEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MutagenPickupEmitter.MutagenPickupEmitter_C.UserConstructionScript
// ()

void AMutagenPickupEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MutagenPickupEmitter.MutagenPickupEmitter_C.UserConstructionScript");

	AMutagenPickupEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutagenPickupEmitter.MutagenPickupEmitter_C.ExecuteUbergraph_MutagenPickupEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMutagenPickupEmitter_C::ExecuteUbergraph_MutagenPickupEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MutagenPickupEmitter.MutagenPickupEmitter_C.ExecuteUbergraph_MutagenPickupEmitter");

	AMutagenPickupEmitter_C_ExecuteUbergraph_MutagenPickupEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
