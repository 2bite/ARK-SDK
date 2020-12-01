// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjKingKaijuFireball_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjKingKaijuFireball.ProjKingKaijuFireball_C.UserConstructionScript
// ()

void AProjKingKaijuFireball_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjKingKaijuFireball.ProjKingKaijuFireball_C.UserConstructionScript");

	AProjKingKaijuFireball_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjKingKaijuFireball.ProjKingKaijuFireball_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjKingKaijuFireball_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjKingKaijuFireball.ProjKingKaijuFireball_C.ReceiveTick");

	AProjKingKaijuFireball_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjKingKaijuFireball.ProjKingKaijuFireball_C.ReceiveBeginPlay
// ()

void AProjKingKaijuFireball_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjKingKaijuFireball.ProjKingKaijuFireball_C.ReceiveBeginPlay");

	AProjKingKaijuFireball_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjKingKaijuFireball.ProjKingKaijuFireball_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void AProjKingKaijuFireball_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjKingKaijuFireball.ProjKingKaijuFireball_C.ReceiveEndPlay");

	AProjKingKaijuFireball_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjKingKaijuFireball.ProjKingKaijuFireball_C.ExecuteUbergraph_ProjKingKaijuFireball
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjKingKaijuFireball_C::ExecuteUbergraph_ProjKingKaijuFireball(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjKingKaijuFireball.ProjKingKaijuFireball_C.ExecuteUbergraph_ProjKingKaijuFireball");

	AProjKingKaijuFireball_C_ExecuteUbergraph_ProjKingKaijuFireball_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
