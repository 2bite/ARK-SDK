// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ConfettiEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConfettiEmitter.ConfettiEmitter_C.ReceiveBeginPlay
// ()

void AConfettiEmitter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfettiEmitter.ConfettiEmitter_C.ReceiveBeginPlay");

	AConfettiEmitter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfettiEmitter.ConfettiEmitter_C.UserConstructionScript
// ()

void AConfettiEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfettiEmitter.ConfettiEmitter_C.UserConstructionScript");

	AConfettiEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfettiEmitter.ConfettiEmitter_C.PlayBdayMusic
// ()

void AConfettiEmitter_C::PlayBdayMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfettiEmitter.ConfettiEmitter_C.PlayBdayMusic");

	AConfettiEmitter_C_PlayBdayMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfettiEmitter.ConfettiEmitter_C.ExecuteUbergraph_ConfettiEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AConfettiEmitter_C::ExecuteUbergraph_ConfettiEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfettiEmitter.ConfettiEmitter_C.ExecuteUbergraph_ConfettiEmitter");

	AConfettiEmitter_C_ExecuteUbergraph_ConfettiEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
