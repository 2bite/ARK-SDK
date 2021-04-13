// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bee_Queen_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.CanSpawnDrones
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABee_Queen_Character_BP_C::CanSpawnDrones()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.CanSpawnDrones");

	ABee_Queen_Character_BP_C_CanSpawnDrones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.On Drone Died
// ()
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   InstigatorPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void ABee_Queen_Character_BP_C::On_Drone_Died(float Damage, class APawn* InstigatorPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.On Drone Died");

	ABee_Queen_Character_BP_C_On_Drone_Died_Params params;
	params.Damage = Damage;
	params.InstigatorPawn = InstigatorPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ABee_Queen_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPSetupTamed");

	ABee_Queen_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.TimerUpdateDrones
// ()

void ABee_Queen_Character_BP_C::TimerUpdateDrones()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.TimerUpdateDrones");

	ABee_Queen_Character_BP_C_TimerUpdateDrones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.GetHiveSocketName
// ()
// Parameters:
// class UHierarchicalInstancedStaticMeshComponent* Mesh                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Selected                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABee_Queen_Character_BP_C::GetHiveSocketName(class UHierarchicalInstancedStaticMeshComponent* Mesh, struct FName* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.GetHiveSocketName");

	ABee_Queen_Character_BP_C_GetHiveSocketName_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selected != nullptr)
		*Selected = params.Selected;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.UpdateDrones
// ()

void ABee_Queen_Character_BP_C::UpdateDrones()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.UpdateDrones");

	ABee_Queen_Character_BP_C_UpdateDrones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.AddBeeReference
// ()
// Parameters:
// class APrimalDinoCharacter*    BeeReference                   (Parm, ZeroConstructor, IsPlainOldData)

void ABee_Queen_Character_BP_C::AddBeeReference(class APrimalDinoCharacter* BeeReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.AddBeeReference");

	ABee_Queen_Character_BP_C_AddBeeReference_Params params;
	params.BeeReference = BeeReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPTryMultiUse
// (NetReliable, NetRequest, Exec, Native, Event, Public, Protected, Delegate, NetServer, NetClient)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABee_Queen_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPTryMultiUse");

	ABee_Queen_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Exec, Native, NetResponse, Public, Protected, Delegate, NetServer, NetClient)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABee_Queen_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPGetMultiUseEntries");

	ABee_Queen_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABee_Queen_Character_BP_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPClientDoMultiUse");

	ABee_Queen_Character_BP_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABee_Queen_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPAdjustDamage");

	ABee_Queen_Character_BP_C_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.HideNotify
// ()

void ABee_Queen_Character_BP_C::HideNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.HideNotify");

	ABee_Queen_Character_BP_C_HideNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.OnRep_bIsHidden
// ()

void ABee_Queen_Character_BP_C::OnRep_bIsHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.OnRep_bIsHidden");

	ABee_Queen_Character_BP_C_OnRep_bIsHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SearchTreesForValidHiveSpawnLocation
// (NetReliable, Native, Static, Public, Protected, Delegate, NetServer, NetClient)
// Parameters:
// bool                           succeeded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct UObject_FTransform      Transform                      (Parm, OutParm, IsPlainOldData)

void ABee_Queen_Character_BP_C::STATIC_SearchTreesForValidHiveSpawnLocation(bool* succeeded, struct UObject_FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SearchTreesForValidHiveSpawnLocation");

	ABee_Queen_Character_BP_C_SearchTreesForValidHiveSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (succeeded != nullptr)
		*succeeded = params.succeeded;
	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.HideInHive
// ()
// Parameters:
// class ABeeHive_C*              Hive                           (Parm, ZeroConstructor, IsPlainOldData)

void ABee_Queen_Character_BP_C::HideInHive(class ABeeHive_C* Hive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.HideInHive");

	ABee_Queen_Character_BP_C_HideInHive_Params params;
	params.Hive = Hive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.Try to Spawn Drones
// ()
// Parameters:
// int                            NumToSpawn                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayAnim                       (Parm, ZeroConstructor, IsPlainOldData)

void ABee_Queen_Character_BP_C::Try_to_Spawn_Drones(int NumToSpawn, bool PlayAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.Try to Spawn Drones");

	ABee_Queen_Character_BP_C_Try_to_Spawn_Drones_Params params;
	params.NumToSpawn = NumToSpawn;
	params.PlayAnim = PlayAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPTimerServer
// ()

void ABee_Queen_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPTimerServer");

	ABee_Queen_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.UserConstructionScript
// ()

void ABee_Queen_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.UserConstructionScript");

	ABee_Queen_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SpawnDrone
// ()
// Parameters:
// int                            NumToSpawn                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayedAnim                     (Parm, ZeroConstructor, IsPlainOldData)

void ABee_Queen_Character_BP_C::SpawnDrone(int NumToSpawn, bool PlayedAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SpawnDrone");

	ABee_Queen_Character_BP_C_SpawnDrone_Params params;
	params.NumToSpawn = NumToSpawn;
	params.PlayedAnim = PlayedAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPUnstasis
// ()

void ABee_Queen_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPUnstasis");

	ABee_Queen_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.Init
// ()

void ABee_Queen_Character_BP_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.Init");

	ABee_Queen_Character_BP_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SpawnSmoke
// ()

void ABee_Queen_Character_BP_C::SpawnSmoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SpawnSmoke");

	ABee_Queen_Character_BP_C_SpawnSmoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.Suicide
// ()

void ABee_Queen_Character_BP_C::Suicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.Suicide");

	ABee_Queen_Character_BP_C_Suicide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.ReceiveBeginPlay
// ()

void ABee_Queen_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.ReceiveBeginPlay");

	ABee_Queen_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.OnDied_Event
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void ABee_Queen_Character_BP_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.OnDied_Event");

	ABee_Queen_Character_BP_C_OnDied_Event_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SpawnedDronePart
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ABee_Queen_Character_BP_C::SpawnedDronePart(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SpawnedDronePart");

	ABee_Queen_Character_BP_C_SpawnedDronePart_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.ExecuteUbergraph_Bee_Queen_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABee_Queen_Character_BP_C::ExecuteUbergraph_Bee_Queen_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.ExecuteUbergraph_Bee_Queen_Character_BP");

	ABee_Queen_Character_BP_C_ExecuteUbergraph_Bee_Queen_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
