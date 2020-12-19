// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjIceNeedle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjIceNeedle.ProjIceNeedle_C.UserConstructionScript
// ()

void AProjIceNeedle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjIceNeedle.ProjIceNeedle_C.UserConstructionScript");

	AProjIceNeedle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjIceNeedle.ProjIceNeedle_C.ReceiveBeginPlay
// ()

void AProjIceNeedle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjIceNeedle.ProjIceNeedle_C.ReceiveBeginPlay");

	AProjIceNeedle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjIceNeedle.ProjIceNeedle_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void AProjIceNeedle_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjIceNeedle.ProjIceNeedle_C.ReceiveEndPlay");

	AProjIceNeedle_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjIceNeedle.ProjIceNeedle_C.ExecuteUbergraph_ProjIceNeedle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjIceNeedle_C::ExecuteUbergraph_ProjIceNeedle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjIceNeedle.ProjIceNeedle_C.ExecuteUbergraph_ProjIceNeedle");

	AProjIceNeedle_C_ExecuteUbergraph_ProjIceNeedle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
