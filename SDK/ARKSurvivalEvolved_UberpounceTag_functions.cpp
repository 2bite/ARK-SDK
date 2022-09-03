// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_UberpounceTag_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UberpounceTag.UberpounceTag_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AUberpounceTag_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function UberpounceTag.UberpounceTag_C.ReceiveTick");

	AUberpounceTag_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UberpounceTag.UberpounceTag_C.UserConstructionScript
// ()

void AUberpounceTag_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function UberpounceTag.UberpounceTag_C.UserConstructionScript");

	AUberpounceTag_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UberpounceTag.UberpounceTag_C.ExecuteUbergraph_UberpounceTag
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AUberpounceTag_C::ExecuteUbergraph_UberpounceTag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UberpounceTag.UberpounceTag_C.ExecuteUbergraph_UberpounceTag");

	AUberpounceTag_C_ExecuteUbergraph_UberpounceTag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
