// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KingKaiju_Character_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetVar_DifficultyIndex
// ()
// Parameters:
// int                            Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKingKaiju_Character_Interface_C::GetVar_DifficultyIndex(int* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetVar_DifficultyIndex");

	UKingKaiju_Character_Interface_C_GetVar_DifficultyIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetVar_InHordeMode
// ()
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKingKaiju_Character_Interface_C::GetVar_InHordeMode(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetVar_InHordeMode");

	UKingKaiju_Character_Interface_C_GetVar_InHordeMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetKingKaijuCharStatusComponent
// ()
// Parameters:
// class UPrimalCharacterStatusComponent* Component                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKingKaiju_Character_Interface_C::GetKingKaijuCharStatusComponent(class UPrimalCharacterStatusComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetKingKaijuCharStatusComponent");

	UKingKaiju_Character_Interface_C_GetKingKaijuCharStatusComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


// Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.SetVar_PlayersLostHordeMode
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UKingKaiju_Character_Interface_C::SetVar_PlayersLostHordeMode(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.SetVar_PlayersLostHordeMode");

	UKingKaiju_Character_Interface_C_SetVar_PlayersLostHordeMode_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.SetVar_FinishCurrentHordeMode
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UKingKaiju_Character_Interface_C::SetVar_FinishCurrentHordeMode(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.SetVar_FinishCurrentHordeMode");

	UKingKaiju_Character_Interface_C_SetVar_FinishCurrentHordeMode_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.SetVar_KKArenaManager
// ()
// Parameters:
// class AActor*                  ArenaManager                   (Parm, ZeroConstructor, IsPlainOldData)

void UKingKaiju_Character_Interface_C::SetVar_KKArenaManager(class AActor* ArenaManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.SetVar_KKArenaManager");

	UKingKaiju_Character_Interface_C_SetVar_KKArenaManager_Params params;
	params.ArenaManager = ArenaManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetKaijuEnemyList
// ()
// Parameters:
// TArray<class APrimalCharacter*> EnemyList                      (Parm, OutParm, ZeroConstructor)

void UKingKaiju_Character_Interface_C::GetKaijuEnemyList(TArray<class APrimalCharacter*>* EnemyList)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetKaijuEnemyList");

	UKingKaiju_Character_Interface_C_GetKaijuEnemyList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnemyList != nullptr)
		*EnemyList = params.EnemyList;
}


// Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetClosestEnemy
// ()
// Parameters:
// class AActor*                  Enemy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKingKaiju_Character_Interface_C::GetClosestEnemy(class AActor** Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetClosestEnemy");

	UKingKaiju_Character_Interface_C_GetClosestEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enemy != nullptr)
		*Enemy = params.Enemy;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
