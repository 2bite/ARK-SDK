// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KingKaiju_ElementNode_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.IsKaiju
// ()
// Parameters:
// class UObject*                 TestObject                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsKaiju                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_ElementNode_C::IsKaiju(class UObject* TestObject, bool* IsKaiju)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.IsKaiju");

	AKingKaiju_ElementNode_C_IsKaiju_Params params;
	params.TestObject = TestObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsKaiju != nullptr)
		*IsKaiju = params.IsKaiju;
}


// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AKingKaiju_ElementNode_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.BPAdjustDamage");

	AKingKaiju_ElementNode_C_BPAdjustDamage_Params params;
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


// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.RunLandSequence
// ()

void AKingKaiju_ElementNode_C::RunLandSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.RunLandSequence");

	AKingKaiju_ElementNode_C_RunLandSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.EjectElementBasedOnHealth
// ()

void AKingKaiju_ElementNode_C::EjectElementBasedOnHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.EjectElementBasedOnHealth");

	AKingKaiju_ElementNode_C_EjectElementBasedOnHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.BuffCorruptDinos
// ()

void AKingKaiju_ElementNode_C::BuffCorruptDinos()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.BuffCorruptDinos");

	AKingKaiju_ElementNode_C_BuffCorruptDinos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.CheatEndHordeMode
// ()

void AKingKaiju_ElementNode_C::CheatEndHordeMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.CheatEndHordeMode");

	AKingKaiju_ElementNode_C_CheatEndHordeMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.OpenCrate
// ()

void AKingKaiju_ElementNode_C::OpenCrate()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.OpenCrate");

	AKingKaiju_ElementNode_C_OpenCrate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.InitializeBehaviorTreeVars
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_ElementNode_C::InitializeBehaviorTreeVars(class APrimalDinoCharacter* Dino, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.InitializeBehaviorTreeVars");

	AKingKaiju_ElementNode_C_InitializeBehaviorTreeVars_Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.FindSpawnLocation
// ()
// Parameters:
// bool                           FoundLoc                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Loc                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_ElementNode_C::FindSpawnLocation(bool* FoundLoc, struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.FindSpawnLocation");

	AKingKaiju_ElementNode_C_FindSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundLoc != nullptr)
		*FoundLoc = params.FoundLoc;
	if (Loc != nullptr)
		*Loc = params.Loc;
}


// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.Initiate Horde Mode
// ()

void AKingKaiju_ElementNode_C::Initiate_Horde_Mode()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.Initiate Horde Mode");

	AKingKaiju_ElementNode_C_Initiate_Horde_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.OnRep_bHasLanded
// ()

void AKingKaiju_ElementNode_C::OnRep_bHasLanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.OnRep_bHasLanded");

	AKingKaiju_ElementNode_C_OnRep_bHasLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.PrepareNPCForRouting
// ()
// Parameters:
// class APrimalDinoCharacter**   APrimalDino                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsSpawned                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FSpawnPointStruct*      LocationNode                   (Parm)
// class AHorde_Spline_Path_C**   WorldSpline                    (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_ElementNode_C::PrepareNPCForRouting(class APrimalDinoCharacter** APrimalDino, bool* bIsSpawned, struct FSpawnPointStruct* LocationNode, class AHorde_Spline_Path_C** WorldSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.PrepareNPCForRouting");

	AKingKaiju_ElementNode_C_PrepareNPCForRouting_Params params;
	params.APrimalDino = APrimalDino;
	params.bIsSpawned = bIsSpawned;
	params.LocationNode = LocationNode;
	params.WorldSpline = WorldSpline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.UserConstructionScript
// ()

void AKingKaiju_ElementNode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.UserConstructionScript");

	AKingKaiju_ElementNode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.ReceiveBeginPlay
// ()

void AKingKaiju_ElementNode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.ReceiveBeginPlay");

	AKingKaiju_ElementNode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.ReceiveDestroyed
// ()

void AKingKaiju_ElementNode_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.ReceiveDestroyed");

	AKingKaiju_ElementNode_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.SpawnWave
// ()

void AKingKaiju_ElementNode_C::SpawnWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.SpawnWave");

	AKingKaiju_ElementNode_C_SpawnWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.Multi_PlaySpawnDinoFX
// ()
// Parameters:
// class UParticleSystem*         FX                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_ElementNode_C::Multi_PlaySpawnDinoFX(class UParticleSystem* FX, const struct FVector& Loc, const struct FVector& Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.Multi_PlaySpawnDinoFX");

	AKingKaiju_ElementNode_C_Multi_PlaySpawnDinoFX_Params params;
	params.FX = FX;
	params.Loc = Loc;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.DelayedDestroyNode
// ()

void AKingKaiju_ElementNode_C::DelayedDestroyNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.DelayedDestroyNode");

	AKingKaiju_ElementNode_C_DelayedDestroyNode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.Multi_ToggleFXStunDraw
// ()
// Parameters:
// bool                           Activate                       (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_ElementNode_C::Multi_ToggleFXStunDraw(bool Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.Multi_ToggleFXStunDraw");

	AKingKaiju_ElementNode_C_Multi_ToggleFXStunDraw_Params params;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.SetVar_KKCharacter
// ()
// Parameters:
// class AActor*                  KKChar                         (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_ElementNode_C::SetVar_KKCharacter(class AActor* KKChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.SetVar_KKCharacter");

	AKingKaiju_ElementNode_C_SetVar_KKCharacter_Params params;
	params.KKChar = KKChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.ExecuteUbergraph_KingKaiju_ElementNode
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_ElementNode_C::ExecuteUbergraph_KingKaiju_ElementNode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.ExecuteUbergraph_KingKaiju_ElementNode");

	AKingKaiju_ElementNode_C_ExecuteUbergraph_KingKaiju_ElementNode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
