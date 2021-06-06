// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjGlowStick_Self_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjGlowStick_Self.ProjGlowStick_Self_C.GetGlowstickOwner
// ()
// Parameters:
// class AActor*                  glowstickOwner                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjGlowStick_Self_C::GetGlowstickOwner(class AActor** glowstickOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick_Self.ProjGlowStick_Self_C.GetGlowstickOwner");

	AProjGlowStick_Self_C_GetGlowstickOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (glowstickOwner != nullptr)
		*glowstickOwner = params.glowstickOwner;
}


// Function ProjGlowStick_Self.ProjGlowStick_Self_C.UserConstructionScript
// ()

void AProjGlowStick_Self_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick_Self.ProjGlowStick_Self_C.UserConstructionScript");

	AProjGlowStick_Self_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGlowStick_Self.ProjGlowStick_Self_C.ReceiveBeginPlay
// ()

void AProjGlowStick_Self_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick_Self.ProjGlowStick_Self_C.ReceiveBeginPlay");

	AProjGlowStick_Self_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGlowStick_Self.ProjGlowStick_Self_C.ExecuteUbergraph_ProjGlowStick_Self
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjGlowStick_Self_C::ExecuteUbergraph_ProjGlowStick_Self(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick_Self.ProjGlowStick_Self_C.ExecuteUbergraph_ProjGlowStick_Self");

	AProjGlowStick_Self_C_ExecuteUbergraph_ProjGlowStick_Self_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
