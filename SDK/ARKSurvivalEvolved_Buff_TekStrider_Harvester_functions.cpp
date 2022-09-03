// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_Harvester_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Try To Add  Resource from first trace
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Protected, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class UPrimitiveComponent*     hit_component                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FOverlappedFoliageElement> Resources                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 impact_point                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Harvester_C::STATIC_Try_To_Add__Resource_from_first_trace(class UPrimitiveComponent* hit_component, const struct FVector& impact_point, TArray<struct FOverlappedFoliageElement>* Resources)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Try To Add  Resource from first trace");

	ABuff_TekStrider_Harvester_C_Try_To_Add__Resource_from_first_trace_Params params;
	params.hit_component = hit_component;
	params.impact_point = impact_point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Resources != nullptr)
		*Resources = params.Resources;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.clamp angle
// ()
// Parameters:
// struct FVector                 A                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          InputPin                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_TekStrider_Harvester_C::clamp_angle(const struct FVector& A, float InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.clamp angle");

	ABuff_TekStrider_Harvester_C_clamp_angle_Params params;
	params.A = A;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Deactivate Firing Vfx
// ()

void ABuff_TekStrider_Harvester_C::Deactivate_Firing_Vfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Deactivate Firing Vfx");

	ABuff_TekStrider_Harvester_C_Deactivate_Firing_Vfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Harvester_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BuffTickServer");

	ABuff_TekStrider_Harvester_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPGetHUDElements
// (Exec, Native, MulticastDelegate, Public, Private, NetServer, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_TekStrider_Harvester_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPGetHUDElements");

	ABuff_TekStrider_Harvester_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.CanActivateHarvester
// ()
// Parameters:
// bool                           check_special_conditions_for_debugging (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Harvester_C::CanActivateHarvester(bool check_special_conditions_for_debugging, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.CanActivateHarvester");

	ABuff_TekStrider_Harvester_C_CanActivateHarvester_Params params;
	params.check_special_conditions_for_debugging = check_special_conditions_for_debugging;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.GetOwnerStriderLinkedDediStorageSelectedItemClass
// ()
// Parameters:
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ItemClass                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Harvester_C::GetOwnerStriderLinkedDediStorageSelectedItemClass(bool* bIsValid, class UClass** ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.GetOwnerStriderLinkedDediStorageSelectedItemClass");

	ABuff_TekStrider_Harvester_C_GetOwnerStriderLinkedDediStorageSelectedItemClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;
	if (ItemClass != nullptr)
		*ItemClass = params.ItemClass;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ShouldHarvestFoliage
// (NetReliable, NetRequest, Exec, Native, Event, Static, Protected, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FOverlappedFoliageElement CheckFoliage                   (Parm)
// struct FVector                 override_harvest_loc           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Harvester_C::STATIC_ShouldHarvestFoliage(const struct FOverlappedFoliageElement& CheckFoliage, const struct FVector& override_harvest_loc, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ShouldHarvestFoliage");

	ABuff_TekStrider_Harvester_C_ShouldHarvestFoliage_Params params;
	params.CheckFoliage = CheckFoliage;
	params.override_harvest_loc = override_harvest_loc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Harvester_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPClientDoMultiUse");

	ABuff_TekStrider_Harvester_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Cannot Fire Timer
// ()

void ABuff_TekStrider_Harvester_C::Cannot_Fire_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Cannot Fire Timer");

	ABuff_TekStrider_Harvester_C_Cannot_Fire_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPGetMultiUseEntries
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABuff_TekStrider_Harvester_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPGetMultiUseEntries");

	ABuff_TekStrider_Harvester_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.add found foliage
// (NetReliable, Native, NetResponse, NetMulticast, Protected, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// TArray<struct FOverlappedFoliageElement> Array                          (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABuff_TekStrider_Harvester_C::add_found_foliage(TArray<struct FOverlappedFoliageElement>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.add found foliage");

	ABuff_TekStrider_Harvester_C_add_found_foliage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.spawn targeting vfx
// ()
// Parameters:
// TArray<struct FVector>         InputPin                       (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABuff_TekStrider_Harvester_C::spawn_targeting_vfx(TArray<struct FVector>* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.spawn targeting vfx");

	ABuff_TekStrider_Harvester_C_spawn_targeting_vfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputPin != nullptr)
		*InputPin = params.InputPin;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Pass In Foliage Limit
// ()

void ABuff_TekStrider_Harvester_C::Pass_In_Foliage_Limit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Pass In Foliage Limit");

	ABuff_TekStrider_Harvester_C_Pass_In_Foliage_Limit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Is Firing Clientside
// ()

void ABuff_TekStrider_Harvester_C::Is_Firing_Clientside()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Is Firing Clientside");

	ABuff_TekStrider_Harvester_C_Is_Firing_Clientside_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Restriction on Passing Foliage to Server
// ()

void ABuff_TekStrider_Harvester_C::Restriction_on_Passing_Foliage_to_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Restriction on Passing Foliage to Server");

	ABuff_TekStrider_Harvester_C_Restriction_on_Passing_Foliage_to_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Delay Disable Independant Impact Mining Vfx 2
// ()

void ABuff_TekStrider_Harvester_C::Delay_Disable_Independant_Impact_Mining_Vfx_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Delay Disable Independant Impact Mining Vfx 2");

	ABuff_TekStrider_Harvester_C_Delay_Disable_Independant_Impact_Mining_Vfx_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.clamp aiming angle
// ()
// Parameters:
// struct FVector                 inVec                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_TekStrider_Harvester_C::clamp_aiming_angle(const struct FVector& inVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.clamp aiming angle");

	ABuff_TekStrider_Harvester_C_clamp_aiming_angle_Params params;
	params.inVec = inVec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.set aim indicator direction
// ()

void ABuff_TekStrider_Harvester_C::set_aim_indicator_direction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.set aim indicator direction");

	ABuff_TekStrider_Harvester_C_set_aim_indicator_direction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Restrict Too Frequent Calls to Show Gather Vfx
// ()

void ABuff_TekStrider_Harvester_C::Restrict_Too_Frequent_Calls_to_Show_Gather_Vfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Restrict Too Frequent Calls to Show Gather Vfx");

	ABuff_TekStrider_Harvester_C_Restrict_Too_Frequent_Calls_to_Show_Gather_Vfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Is Firing
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Protected, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)

void ABuff_TekStrider_Harvester_C::STATIC_Is_Firing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Is Firing");

	ABuff_TekStrider_Harvester_C_Is_Firing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ReceiveBeginPlay
// ()

void ABuff_TekStrider_Harvester_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ReceiveBeginPlay");

	ABuff_TekStrider_Harvester_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Delay Disable Independant Impact Mining Vfx
// ()

void ABuff_TekStrider_Harvester_C::Delay_Disable_Independant_Impact_Mining_Vfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Delay Disable Independant Impact Mining Vfx");

	ABuff_TekStrider_Harvester_C_Delay_Disable_Independant_Impact_Mining_Vfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Trigger
// ()

void ABuff_TekStrider_Harvester_C::Trigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Trigger");

	ABuff_TekStrider_Harvester_C_Trigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Get Beam Origin and End
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Harvester_C::Get_Beam_Origin_and_End(struct FVector* Origin, struct FVector* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Get Beam Origin and End");

	ABuff_TekStrider_Harvester_C_Get_Beam_Origin_and_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (End != nullptr)
		*End = params.End;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.GetBeamImpact
// (NetRequest, Native, Event, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 BeamStart                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BeamEnd                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BeamImpact                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HitSomething_                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Harvester_C::GetBeamImpact(const struct FVector& BeamStart, const struct FVector& BeamEnd, struct FVector* BeamImpact, bool* HitSomething_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.GetBeamImpact");

	ABuff_TekStrider_Harvester_C_GetBeamImpact_Params params;
	params.BeamStart = BeamStart;
	params.BeamEnd = BeamEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BeamImpact != nullptr)
		*BeamImpact = params.BeamImpact;
	if (HitSomething_ != nullptr)
		*HitSomething_ = params.HitSomething_;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.IsAIControlled?
// ()
// Parameters:
// bool                           IsAI_                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Harvester_C::IsAIControlled_(bool* IsAI_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.IsAIControlled?");

	ABuff_TekStrider_Harvester_C_IsAIControlled__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAI_ != nullptr)
		*IsAI_ = params.IsAI_;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Update Beam Impact Location
// (Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintPure, Const, NetValidate)

void ABuff_TekStrider_Harvester_C::Update_Beam_Impact_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Update Beam Impact Location");

	ABuff_TekStrider_Harvester_C_Update_Beam_Impact_Location_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPSetupForInstigator
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Harvester_C::STATIC_BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPSetupForInstigator");

	ABuff_TekStrider_Harvester_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BuffTickClient
// (NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Harvester_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BuffTickClient");

	ABuff_TekStrider_Harvester_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Buff Tick Server Logic
// ()

void ABuff_TekStrider_Harvester_C::Buff_Tick_Server_Logic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Buff Tick Server Logic");

	ABuff_TekStrider_Harvester_C_Buff_Tick_Server_Logic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Visual Beam Origin
// ()

void ABuff_TekStrider_Harvester_C::Visual_Beam_Origin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Visual Beam Origin");

	ABuff_TekStrider_Harvester_C_Visual_Beam_Origin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.UserConstructionScript
// ()

void ABuff_TekStrider_Harvester_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.UserConstructionScript");

	ABuff_TekStrider_Harvester_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_ActivateBeam
// ()

void ABuff_TekStrider_Harvester_C::Multicast_ActivateBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_ActivateBeam");

	ABuff_TekStrider_Harvester_C_Multicast_ActivateBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_DeactivateBeam
// ()

void ABuff_TekStrider_Harvester_C::Multicast_DeactivateBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_DeactivateBeam");

	ABuff_TekStrider_Harvester_C_Multicast_DeactivateBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ValidatePlayerBeamOnServer
// ()
// Parameters:
// struct FVector                 ImpactPoint                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Harvester_C::ValidatePlayerBeamOnServer(const struct FVector& ImpactPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ValidatePlayerBeamOnServer");

	ABuff_TekStrider_Harvester_C_ValidatePlayerBeamOnServer_Params params;
	params.ImpactPoint = ImpactPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_UpdateBeamImpactLocation
// ()
// Parameters:
// struct FVector                 BeamImpactLocation             (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Harvester_C::Multicast_UpdateBeamImpactLocation(const struct FVector& BeamImpactLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_UpdateBeamImpactLocation");

	ABuff_TekStrider_Harvester_C_Multicast_UpdateBeamImpactLocation_Params params;
	params.BeamImpactLocation = BeamImpactLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_Pass_Multiple_Impact_Locations
// ()
// Parameters:
// TArray<struct FVector>         impact_locations               (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           contained_rocks                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Harvester_C::Multicast_Pass_Multiple_Impact_Locations(bool contained_rocks, TArray<struct FVector>* impact_locations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_Pass_Multiple_Impact_Locations");

	ABuff_TekStrider_Harvester_C_Multicast_Pass_Multiple_Impact_Locations_Params params;
	params.contained_rocks = contained_rocks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (impact_locations != nullptr)
		*impact_locations = params.impact_locations;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.multicast begin charging shot
// ()

void ABuff_TekStrider_Harvester_C::multicast_begin_charging_shot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.multicast begin charging shot");

	ABuff_TekStrider_Harvester_C_multicast_begin_charging_shot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.InventoryItemAdded__DelegateSignature_Event
// ()
// Parameters:
// class UPrimalInventoryComponent* inventory                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem*             Item                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            AmountAdded                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEquippedItem                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Harvester_C::InventoryItemAdded__DelegateSignature_Event(class UPrimalInventoryComponent* inventory, class UPrimalItem* Item, int AmountAdded, bool bEquippedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.InventoryItemAdded__DelegateSignature_Event");

	ABuff_TekStrider_Harvester_C_InventoryItemAdded__DelegateSignature_Event_Params params;
	params.inventory = inventory;
	params.Item = Item;
	params.AmountAdded = AmountAdded;
	params.bEquippedItem = bEquippedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.bind item added
// ()

void ABuff_TekStrider_Harvester_C::bind_item_added()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.bind item added");

	ABuff_TekStrider_Harvester_C_bind_item_added_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.unbind item added
// ()

void ABuff_TekStrider_Harvester_C::unbind_item_added()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.unbind item added");

	ABuff_TekStrider_Harvester_C_unbind_item_added_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_Charge_Upcoming_Zaps
// ()
// Parameters:
// TArray<struct FVector>         impact_locations               (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           contained_rocks                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Harvester_C::Multicast_Charge_Upcoming_Zaps(bool contained_rocks, TArray<struct FVector>* impact_locations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_Charge_Upcoming_Zaps");

	ABuff_TekStrider_Harvester_C_Multicast_Charge_Upcoming_Zaps_Params params;
	params.contained_rocks = contained_rocks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (impact_locations != nullptr)
		*impact_locations = params.impact_locations;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.passed-in foliage
// ()
// Parameters:
// TArray<struct FOverlappedFoliageElement> Foliage                        (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABuff_TekStrider_Harvester_C::passed_in_foliage(TArray<struct FOverlappedFoliageElement>* Foliage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.passed-in foliage");

	ABuff_TekStrider_Harvester_C_passed_in_foliage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Foliage != nullptr)
		*Foliage = params.Foliage;
}


// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ExecuteUbergraph_Buff_TekStrider_Harvester
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Harvester_C::ExecuteUbergraph_Buff_TekStrider_Harvester(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ExecuteUbergraph_Buff_TekStrider_Harvester");

	ABuff_TekStrider_Harvester_C_ExecuteUbergraph_Buff_TekStrider_Harvester_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
