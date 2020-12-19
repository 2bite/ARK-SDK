// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Achatina_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Achatina_Character_BP.Achatina_Character_BP_C.BPDinoARKDownloadedBegin
// ()

void AAchatina_Character_BP_C::BPDinoARKDownloadedBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Achatina_Character_BP.Achatina_Character_BP_C.BPDinoARKDownloadedBegin");

	AAchatina_Character_BP_C_BPDinoARKDownloadedBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Achatina_Character_BP.Achatina_Character_BP_C.BPCharacterUnsleeped
// ()

void AAchatina_Character_BP_C::BPCharacterUnsleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Achatina_Character_BP.Achatina_Character_BP_C.BPCharacterUnsleeped");

	AAchatina_Character_BP_C_BPCharacterUnsleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Achatina_Character_BP.Achatina_Character_BP_C.BPCharacterSleeped
// ()

void AAchatina_Character_BP_C::BPCharacterSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Achatina_Character_BP.Achatina_Character_BP_C.BPCharacterSleeped");

	AAchatina_Character_BP_C_BPCharacterSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Achatina_Character_BP.Achatina_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void AAchatina_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Achatina_Character_BP.Achatina_Character_BP_C.BPOnMovementModeChangedNotify");

	AAchatina_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Achatina_Character_BP.Achatina_Character_BP_C.BPTimerNonDedicated
// ()

void AAchatina_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Achatina_Character_BP.Achatina_Character_BP_C.BPTimerNonDedicated");

	AAchatina_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Achatina_Character_BP.Achatina_Character_BP_C.UserConstructionScript
// ()

void AAchatina_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Achatina_Character_BP.Achatina_Character_BP_C.UserConstructionScript");

	AAchatina_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Achatina_Character_BP.Achatina_Character_BP_C.ReceiveBeginPlay
// ()

void AAchatina_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Achatina_Character_BP.Achatina_Character_BP_C.ReceiveBeginPlay");

	AAchatina_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Achatina_Character_BP.Achatina_Character_BP_C.OnDied_Event
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void AAchatina_Character_BP_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Achatina_Character_BP.Achatina_Character_BP_C.OnDied_Event");

	AAchatina_Character_BP_C_OnDied_Event_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Achatina_Character_BP.Achatina_Character_BP_C.ExecuteUbergraph_Achatina_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAchatina_Character_BP_C::ExecuteUbergraph_Achatina_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Achatina_Character_BP.Achatina_Character_BP_C.ExecuteUbergraph_Achatina_Character_BP");

	AAchatina_Character_BP_C_ExecuteUbergraph_Achatina_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
