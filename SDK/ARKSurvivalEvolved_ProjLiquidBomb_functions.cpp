// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjLiquidBomb_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjLiquidBomb.ProjLiquidBomb_C.UserConstructionScript
// ()

void AProjLiquidBomb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjLiquidBomb.ProjLiquidBomb_C.UserConstructionScript");

	AProjLiquidBomb_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjLiquidBomb.ProjLiquidBomb_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjLiquidBomb_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjLiquidBomb.ProjLiquidBomb_C.ReceiveTick");

	AProjLiquidBomb_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjLiquidBomb.ProjLiquidBomb_C.ReceiveBeginPlay
// ()

void AProjLiquidBomb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjLiquidBomb.ProjLiquidBomb_C.ReceiveBeginPlay");

	AProjLiquidBomb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjLiquidBomb.ProjLiquidBomb_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void AProjLiquidBomb_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjLiquidBomb.ProjLiquidBomb_C.ReceiveEndPlay");

	AProjLiquidBomb_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjLiquidBomb.ProjLiquidBomb_C.ExecuteUbergraph_ProjLiquidBomb
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjLiquidBomb_C::ExecuteUbergraph_ProjLiquidBomb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjLiquidBomb.ProjLiquidBomb_C.ExecuteUbergraph_ProjLiquidBomb");

	AProjLiquidBomb_C_ExecuteUbergraph_ProjLiquidBomb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
