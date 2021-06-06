// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpiderL_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpiderL_Character_BP.SpiderL_Character_BP_C.BPGetHealthBarColor
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ASpiderL_Character_BP_C::BPGetHealthBarColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpiderL_Character_BP.SpiderL_Character_BP_C.BPGetHealthBarColor");

	ASpiderL_Character_BP_C_BPGetHealthBarColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpiderL_Character_BP.SpiderL_Character_BP_C.BPSentKilledNotification
// ()
// Parameters:
// class AShooterPlayerController** ToPC                           (Parm, ZeroConstructor, IsPlainOldData)

void ASpiderL_Character_BP_C::BPSentKilledNotification(class AShooterPlayerController** ToPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpiderL_Character_BP.SpiderL_Character_BP_C.BPSentKilledNotification");

	ASpiderL_Character_BP_C_BPSentKilledNotification_Params params;
	params.ToPC = ToPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpiderL_Character_BP.SpiderL_Character_BP_C.UserConstructionScript
// ()

void ASpiderL_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpiderL_Character_BP.SpiderL_Character_BP_C.UserConstructionScript");

	ASpiderL_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpiderL_Character_BP.SpiderL_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ASpiderL_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpiderL_Character_BP.SpiderL_Character_BP_C.ReceiveTick");

	ASpiderL_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpiderL_Character_BP.SpiderL_Character_BP_C.ExecuteUbergraph_SpiderL_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpiderL_Character_BP_C::ExecuteUbergraph_SpiderL_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpiderL_Character_BP.SpiderL_Character_BP_C.ExecuteUbergraph_SpiderL_Character_BP");

	ASpiderL_Character_BP_C_ExecuteUbergraph_SpiderL_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
