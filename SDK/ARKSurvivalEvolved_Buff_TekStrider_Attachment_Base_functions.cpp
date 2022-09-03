// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_Attachment_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.get socket loc
// ()
// Parameters:
// struct FVector                 fallback_loc                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   socket_name                    (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Loc                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           could_get_socket_loc           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Attachment_Base_C::get_socket_loc(const struct FVector& fallback_loc, const struct FName& socket_name, class APrimalCharacter* Character, struct FVector* Loc, bool* could_get_socket_loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.get socket loc");

	ABuff_TekStrider_Attachment_Base_C_get_socket_loc_Params params;
	params.fallback_loc = fallback_loc;
	params.socket_name = socket_name;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loc != nullptr)
		*Loc = params.Loc;
	if (could_get_socket_loc != nullptr)
		*could_get_socket_loc = params.could_get_socket_loc;
}


// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.is head clear
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, NetServer, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FName                   extra_socket                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           from_animbp                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           head_is_clear                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           could_find_socket              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Attachment_Base_C::STATIC_is_head_clear(const struct FName& extra_socket, bool from_animbp, bool* head_is_clear, bool* could_find_socket)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.is head clear");

	ABuff_TekStrider_Attachment_Base_C_is_head_clear_Params params;
	params.extra_socket = extra_socket;
	params.from_animbp = from_animbp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (head_is_clear != nullptr)
		*head_is_clear = params.head_is_clear;
	if (could_find_socket != nullptr)
		*could_find_socket = params.could_find_socket;
}


// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.trace check for blockers between locations
// (Native, Event, NetMulticast, MulticastDelegate, Private, NetServer, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ignore_foliage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekStrider_Attachment_Base_C::trace_check_for_blockers_between_locations(const struct FVector& Start, const struct FVector& End, bool ignore_foliage, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.trace check for blockers between locations");

	ABuff_TekStrider_Attachment_Base_C_trace_check_for_blockers_between_locations_Params params;
	params.Start = Start;
	params.End = End;
	params.ignore_foliage = ignore_foliage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Attachment_Base_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.BuffTickServer");

	ABuff_TekStrider_Attachment_Base_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.clear rider
// ()
// Parameters:
// class AShooterCharacter*       prev_rider                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Attachment_Base_C::clear_rider(class AShooterCharacter* prev_rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.clear rider");

	ABuff_TekStrider_Attachment_Base_C_clear_rider_Params params;
	params.prev_rider = prev_rider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.set rider
// ()

void ABuff_TekStrider_Attachment_Base_C::set_rider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.set rider");

	ABuff_TekStrider_Attachment_Base_C_set_rider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.TriggerDoubletapped
// ()

void ABuff_TekStrider_Attachment_Base_C::TriggerDoubletapped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.TriggerDoubletapped");

	ABuff_TekStrider_Attachment_Base_C_TriggerDoubletapped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.TriggerReleased
// ()

void ABuff_TekStrider_Attachment_Base_C::TriggerReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.TriggerReleased");

	ABuff_TekStrider_Attachment_Base_C_TriggerReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Attachment_Base_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.BPDeactivated");

	ABuff_TekStrider_Attachment_Base_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Attachment_Base_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.BPSetupForInstigator");

	ABuff_TekStrider_Attachment_Base_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.Trigger
// ()

void ABuff_TekStrider_Attachment_Base_C::Trigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.Trigger");

	ABuff_TekStrider_Attachment_Base_C_Trigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.UserConstructionScript
// ()

void ABuff_TekStrider_Attachment_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.UserConstructionScript");

	ABuff_TekStrider_Attachment_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.ExecuteUbergraph_Buff_TekStrider_Attachment_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Attachment_Base_C::ExecuteUbergraph_Buff_TekStrider_Attachment_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.ExecuteUbergraph_Buff_TekStrider_Attachment_Base");

	ABuff_TekStrider_Attachment_Base_C_ExecuteUbergraph_Buff_TekStrider_Attachment_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
