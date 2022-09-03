// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_StriderHacking_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_StriderHacking.Buff_StriderHacking_C.Update Buff Timer server logic
// ()
// Parameters:
// bool*                          Success                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          from_player_trigger            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderHacking_C::Update_Buff_Timer_server_logic(bool* Success, bool* from_player_trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHacking.Buff_StriderHacking_C.Update Buff Timer server logic");

	ABuff_StriderHacking_C_Update_Buff_Timer_server_logic_Params params;
	params.Success = Success;
	params.from_player_trigger = from_player_trigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHacking.Buff_StriderHacking_C.UpdateBuffTimer
// ()
// Parameters:
// bool*                          Success                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          from_player_trigger            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderHacking_C::UpdateBuffTimer(bool* Success, bool* from_player_trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHacking.Buff_StriderHacking_C.UpdateBuffTimer");

	ABuff_StriderHacking_C_UpdateBuffTimer_Params params;
	params.Success = Success;
	params.from_player_trigger = from_player_trigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHacking.Buff_StriderHacking_C.Recieved Input
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* input_type                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          from_player_input              (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderHacking_C::Recieved_Input(TEnumAsByte<EPrimalCharacterInputType>* input_type, bool* from_player_input)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHacking.Buff_StriderHacking_C.Recieved Input");

	ABuff_StriderHacking_C_Recieved_Input_Params params;
	params.input_type = input_type;
	params.from_player_input = from_player_input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHacking.Buff_StriderHacking_C.Beat Reached The End
// ()

void ABuff_StriderHacking_C::Beat_Reached_The_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHacking.Buff_StriderHacking_C.Beat Reached The End");

	ABuff_StriderHacking_C_Beat_Reached_The_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHacking.Buff_StriderHacking_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_StriderHacking_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHacking.Buff_StriderHacking_C.BPCheckPreventInput");

	ABuff_StriderHacking_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_StriderHacking.Buff_StriderHacking_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderHacking_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHacking.Buff_StriderHacking_C.BuffTickServer");

	ABuff_StriderHacking_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHacking.Buff_StriderHacking_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderHacking_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHacking.Buff_StriderHacking_C.BPSetupForInstigator");

	ABuff_StriderHacking_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHacking.Buff_StriderHacking_C.BPOnInputEvent
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderHacking_C::BPOnInputEvent(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHacking.Buff_StriderHacking_C.BPOnInputEvent");

	ABuff_StriderHacking_C_BPOnInputEvent_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHacking.Buff_StriderHacking_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderHacking_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHacking.Buff_StriderHacking_C.ReceiveAnyDamage");

	ABuff_StriderHacking_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHacking.Buff_StriderHacking_C.UserConstructionScript
// ()

void ABuff_StriderHacking_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHacking.Buff_StriderHacking_C.UserConstructionScript");

	ABuff_StriderHacking_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHacking.Buff_StriderHacking_C.do hacking vfx
// ()

void ABuff_StriderHacking_C::do_hacking_vfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHacking.Buff_StriderHacking_C.do hacking vfx");

	ABuff_StriderHacking_C_do_hacking_vfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHacking.Buff_StriderHacking_C.cancel early
// ()

void ABuff_StriderHacking_C::cancel_early()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHacking.Buff_StriderHacking_C.cancel early");

	ABuff_StriderHacking_C_cancel_early_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHacking.Buff_StriderHacking_C.ExecuteUbergraph_Buff_StriderHacking
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderHacking_C::ExecuteUbergraph_Buff_StriderHacking(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHacking.Buff_StriderHacking_C.ExecuteUbergraph_Buff_StriderHacking");

	ABuff_StriderHacking_C_ExecuteUbergraph_Buff_StriderHacking_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHacking.Buff_StriderHacking_C.on hack hit success__DelegateSignature
// ()

void ABuff_StriderHacking_C::on_hack_hit_success__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHacking.Buff_StriderHacking_C.on hack hit success__DelegateSignature");

	ABuff_StriderHacking_C_on_hack_hit_success__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHacking.Buff_StriderHacking_C.on hack hit miss__DelegateSignature
// ()

void ABuff_StriderHacking_C::on_hack_hit_miss__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHacking.Buff_StriderHacking_C.on hack hit miss__DelegateSignature");

	ABuff_StriderHacking_C_on_hack_hit_miss__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHacking.Buff_StriderHacking_C.Hacking Success__DelegateSignature
// ()

void ABuff_StriderHacking_C::Hacking_Success__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHacking.Buff_StriderHacking_C.Hacking Success__DelegateSignature");

	ABuff_StriderHacking_C_Hacking_Success__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
