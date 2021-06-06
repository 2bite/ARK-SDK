// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Jugbug_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.MakeItFly
// ()

void AJugbug_AIController_BP_C::MakeItFly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.MakeItFly");

	AJugbug_AIController_BP_C_MakeItFly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.MakeItWalk
// ()

void AJugbug_AIController_BP_C::MakeItWalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.MakeItWalk");

	AJugbug_AIController_BP_C_MakeItWalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.UserConstructionScript
// ()

void AJugbug_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.UserConstructionScript");

	AJugbug_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AJugbug_AIController_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.ReceiveTick");

	AJugbug_AIController_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.ReceiveBeginPlay
// ()

void AJugbug_AIController_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.ReceiveBeginPlay");

	AJugbug_AIController_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.ExecuteUbergraph_Jugbug_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AJugbug_AIController_BP_C::ExecuteUbergraph_Jugbug_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.ExecuteUbergraph_Jugbug_AIController_BP");

	AJugbug_AIController_BP_C_ExecuteUbergraph_Jugbug_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
