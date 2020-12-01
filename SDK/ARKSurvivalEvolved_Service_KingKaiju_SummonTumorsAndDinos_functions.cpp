// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_KingKaiju_SummonTumorsAndDinos_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C.FindTumorSpawnFrequency
// ()
// Parameters:
// class AKingKaiju_Character_BP_C* KKChar                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          TumorSpawnFrequency            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UService_KingKaiju_SummonTumorsAndDinos_C::FindTumorSpawnFrequency(class AKingKaiju_Character_BP_C* KKChar, float* TumorSpawnFrequency)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C.FindTumorSpawnFrequency");

	UService_KingKaiju_SummonTumorsAndDinos_C_FindTumorSpawnFrequency_Params params;
	params.KKChar = KKChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TumorSpawnFrequency != nullptr)
		*TumorSpawnFrequency = params.TumorSpawnFrequency;
}


// Function Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C.FindMaxTumorAllowed
// ()
// Parameters:
// class AKingKaiju_Character_BP_C* KKChar                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxTumors                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UService_KingKaiju_SummonTumorsAndDinos_C::FindMaxTumorAllowed(class AKingKaiju_Character_BP_C* KKChar, int* MaxTumors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C.FindMaxTumorAllowed");

	UService_KingKaiju_SummonTumorsAndDinos_C_FindMaxTumorAllowed_Params params;
	params.KKChar = KKChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxTumors != nullptr)
		*MaxTumors = params.MaxTumors;
}


// Function Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C.ReceiveActivation
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UService_KingKaiju_SummonTumorsAndDinos_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C.ReceiveActivation");

	UService_KingKaiju_SummonTumorsAndDinos_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C.TumorIsNearby
// ()
// Parameters:
// struct FVector                 AtLoc                          (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        KKChar                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FoundTumorNearby               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UService_KingKaiju_SummonTumorsAndDinos_C::TumorIsNearby(const struct FVector& AtLoc, class APrimalCharacter* KKChar, bool* FoundTumorNearby)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C.TumorIsNearby");

	UService_KingKaiju_SummonTumorsAndDinos_C_TumorIsNearby_Params params;
	params.AtLoc = AtLoc;
	params.KKChar = KKChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundTumorNearby != nullptr)
		*FoundTumorNearby = params.FoundTumorNearby;
}


// Function Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C.FindAllTumors
// ()
// Parameters:
// class AActor*                  KKChar                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Tumors                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UService_KingKaiju_SummonTumorsAndDinos_C::FindAllTumors(class AActor* KKChar, int* Tumors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C.FindAllTumors");

	UService_KingKaiju_SummonTumorsAndDinos_C_FindAllTumors_Params params;
	params.KKChar = KKChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tumors != nullptr)
		*Tumors = params.Tumors;
}


// Function Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C.ReceiveTick
// (Native, NetResponse, Public, HasOutParms, NetClient, BlueprintCallable, Const, NetValidate)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UService_KingKaiju_SummonTumorsAndDinos_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C.ReceiveTick");

	UService_KingKaiju_SummonTumorsAndDinos_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C.ExecuteUbergraph_Service_KingKaiju_SummonTumorsAndDinos
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UService_KingKaiju_SummonTumorsAndDinos_C::ExecuteUbergraph_Service_KingKaiju_SummonTumorsAndDinos(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C.ExecuteUbergraph_Service_KingKaiju_SummonTumorsAndDinos");

	UService_KingKaiju_SummonTumorsAndDinos_C_ExecuteUbergraph_Service_KingKaiju_SummonTumorsAndDinos_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
