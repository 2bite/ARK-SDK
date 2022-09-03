// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjSpaceDolphinBomb_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.BPIgnoreRadialDamageVictim
// ()
// Parameters:
// class AActor**                 Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AProjSpaceDolphinBomb_C::BPIgnoreRadialDamageVictim(class AActor** Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.BPIgnoreRadialDamageVictim");

	AProjSpaceDolphinBomb_C_BPIgnoreRadialDamageVictim_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.UserConstructionScript
// ()

void AProjSpaceDolphinBomb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.UserConstructionScript");

	AProjSpaceDolphinBomb_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjSpaceDolphinBomb_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.ReceiveTick");

	AProjSpaceDolphinBomb_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.ReceiveBeginPlay
// ()

void AProjSpaceDolphinBomb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.ReceiveBeginPlay");

	AProjSpaceDolphinBomb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.ExecuteUbergraph_ProjSpaceDolphinBomb
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjSpaceDolphinBomb_C::ExecuteUbergraph_ProjSpaceDolphinBomb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.ExecuteUbergraph_ProjSpaceDolphinBomb");

	AProjSpaceDolphinBomb_C_ExecuteUbergraph_ProjSpaceDolphinBomb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
