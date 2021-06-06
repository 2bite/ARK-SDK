// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceDolphinEchoLocation_Emitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpaceDolphinEchoLocation_Emitter.SpaceDolphinEchoLocation_Emitter_C.UserConstructionScript
// ()

void ASpaceDolphinEchoLocation_Emitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphinEchoLocation_Emitter.SpaceDolphinEchoLocation_Emitter_C.UserConstructionScript");

	ASpaceDolphinEchoLocation_Emitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphinEchoLocation_Emitter.SpaceDolphinEchoLocation_Emitter_C.ReceiveBeginPlay
// ()

void ASpaceDolphinEchoLocation_Emitter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphinEchoLocation_Emitter.SpaceDolphinEchoLocation_Emitter_C.ReceiveBeginPlay");

	ASpaceDolphinEchoLocation_Emitter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphinEchoLocation_Emitter.SpaceDolphinEchoLocation_Emitter_C.ExecuteUbergraph_SpaceDolphinEchoLocation_Emitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphinEchoLocation_Emitter_C::ExecuteUbergraph_SpaceDolphinEchoLocation_Emitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphinEchoLocation_Emitter.SpaceDolphinEchoLocation_Emitter_C.ExecuteUbergraph_SpaceDolphinEchoLocation_Emitter");

	ASpaceDolphinEchoLocation_Emitter_C_ExecuteUbergraph_SpaceDolphinEchoLocation_Emitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
