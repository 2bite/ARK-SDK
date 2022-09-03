// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChargeFunctions_FakeLibrary_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Buff Create Charge Manager No Instigator Library
// (NetReliable, NetRequest, Exec, Native, Event, Static, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class APrimalBuff*             Buff                           (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  managerClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff*             chargeManager                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChargeFunctions_FakeLibrary_C::STATIC_Buff_Create_Charge_Manager_No_Instigator_Library(class APrimalBuff* Buff, class UClass* managerClass, class APrimalBuff** chargeManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Buff Create Charge Manager No Instigator Library");

	UChargeFunctions_FakeLibrary_C_Buff_Create_Charge_Manager_No_Instigator_Library_Params params;
	params.Buff = Buff;
	params.managerClass = managerClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (chargeManager != nullptr)
		*chargeManager = params.chargeManager;
}


// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Charge Variable Event Integer Library
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff*             managerBuff                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicastEvent                 (Parm, ZeroConstructor, IsPlainOldData)

void UChargeFunctions_FakeLibrary_C::Charge_Variable_Event_Integer_Library(TEnumAsByte<E_ChargeVariableNames> variableType, int dValue, class AActor* OwnerActor, class APrimalBuff* managerBuff, bool multicastEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Charge Variable Event Integer Library");

	UChargeFunctions_FakeLibrary_C_Charge_Variable_Event_Integer_Library_Params params;
	params.variableType = variableType;
	params.dValue = dValue;
	params.OwnerActor = OwnerActor;
	params.managerBuff = managerBuff;
	params.multicastEvent = multicastEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Get Charge At Point Accurate
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  worldActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  chargeEmitterClass             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Charge                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChargeFunctions_FakeLibrary_C::Get_Charge_At_Point_Accurate(const struct FVector& Location, class AActor* worldActor, float Radius, class UClass* chargeEmitterClass, float* Charge)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Get Charge At Point Accurate");

	UChargeFunctions_FakeLibrary_C_Get_Charge_At_Point_Accurate_Params params;
	params.Location = Location;
	params.worldActor = worldActor;
	params.Radius = Radius;
	params.chargeEmitterClass = chargeEmitterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Charge != nullptr)
		*Charge = params.Charge;
}


// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Charge Variable Event Double Library
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff*             managerBuff                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicastEvent                 (Parm, ZeroConstructor, IsPlainOldData)

void UChargeFunctions_FakeLibrary_C::Charge_Variable_Event_Double_Library(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue, class AActor* OwnerActor, class APrimalBuff* managerBuff, bool multicastEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Charge Variable Event Double Library");

	UChargeFunctions_FakeLibrary_C_Charge_Variable_Event_Double_Library_Params params;
	params.variableType = variableType;
	params.dValue = dValue;
	params.OwnerActor = OwnerActor;
	params.managerBuff = managerBuff;
	params.multicastEvent = multicastEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Charge Variable Event Float Library
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff*             managerBuff                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicastEvent                 (Parm, ZeroConstructor, IsPlainOldData)

void UChargeFunctions_FakeLibrary_C::Charge_Variable_Event_Float_Library(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue, class AActor* OwnerActor, class APrimalBuff* managerBuff, bool multicastEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Charge Variable Event Float Library");

	UChargeFunctions_FakeLibrary_C_Charge_Variable_Event_Float_Library_Params params;
	params.variableType = variableType;
	params.fValue = fValue;
	params.OwnerActor = OwnerActor;
	params.managerBuff = managerBuff;
	params.multicastEvent = multicastEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Charge Variable Event Boolean Library
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff*             managerBuff                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicastEvent                 (Parm, ZeroConstructor, IsPlainOldData)

void UChargeFunctions_FakeLibrary_C::Charge_Variable_Event_Boolean_Library(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, class AActor* OwnerActor, class APrimalBuff* managerBuff, bool multicastEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Charge Variable Event Boolean Library");

	UChargeFunctions_FakeLibrary_C_Charge_Variable_Event_Boolean_Library_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.OwnerActor = OwnerActor;
	params.managerBuff = managerBuff;
	params.multicastEvent = multicastEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.GetChargeAtActorAccurate
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  FromActor                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  chargeEmitterClass             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Charge                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChargeFunctions_FakeLibrary_C::GetChargeAtActorAccurate(const struct FVector& Location, class AActor* FromActor, float Radius, class UClass* chargeEmitterClass, float* Charge)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.GetChargeAtActorAccurate");

	UChargeFunctions_FakeLibrary_C_GetChargeAtActorAccurate_Params params;
	params.Location = Location;
	params.FromActor = FromActor;
	params.Radius = Radius;
	params.chargeEmitterClass = chargeEmitterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Charge != nullptr)
		*Charge = params.Charge;
}


// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Buff Create Charge Manager Library
// ()
// Parameters:
// class APrimalBuff*             Buff                           (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  managerClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff*             chargeManager                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChargeFunctions_FakeLibrary_C::Buff_Create_Charge_Manager_Library(class APrimalBuff* Buff, class UClass* managerClass, class APrimalBuff** chargeManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Buff Create Charge Manager Library");

	UChargeFunctions_FakeLibrary_C_Buff_Create_Charge_Manager_Library_Params params;
	params.Buff = Buff;
	params.managerClass = managerClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (chargeManager != nullptr)
		*chargeManager = params.chargeManager;
}


// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Structure Create Charge Manager Library
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class APrimalStructure*        Structure                      (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  managerClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff*             chargeManager                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChargeFunctions_FakeLibrary_C::STATIC_Structure_Create_Charge_Manager_Library(class APrimalStructure* Structure, class UClass* managerClass, class APrimalBuff** chargeManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Structure Create Charge Manager Library");

	UChargeFunctions_FakeLibrary_C_Structure_Create_Charge_Manager_Library_Params params;
	params.Structure = Structure;
	params.managerClass = managerClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (chargeManager != nullptr)
		*chargeManager = params.chargeManager;
}


// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Weapon Create Charge Manager Library
// ()
// Parameters:
// class AShooterWeapon*          weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  managerClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff*             chargeManager                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChargeFunctions_FakeLibrary_C::Weapon_Create_Charge_Manager_Library(class AShooterWeapon* weapon, class UClass* managerClass, class APrimalBuff** chargeManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Weapon Create Charge Manager Library");

	UChargeFunctions_FakeLibrary_C_Weapon_Create_Charge_Manager_Library_Params params;
	params.weapon = weapon;
	params.managerClass = managerClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (chargeManager != nullptr)
		*chargeManager = params.chargeManager;
}


// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.ChargeVariableEventLibrary
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff*             managerBuff                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicastEvent                 (Parm, ZeroConstructor, IsPlainOldData)

void UChargeFunctions_FakeLibrary_C::ChargeVariableEventLibrary(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, class AActor* OwnerActor, class APrimalBuff* managerBuff, bool multicastEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.ChargeVariableEventLibrary");

	UChargeFunctions_FakeLibrary_C_ChargeVariableEventLibrary_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.OwnerActor = OwnerActor;
	params.managerBuff = managerBuff;
	params.multicastEvent = multicastEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.CharacterCreateChargeManagerLibrary
// (Exec, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// class APrimalCharacter*        CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  managerClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff*             chargeManager                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChargeFunctions_FakeLibrary_C::CharacterCreateChargeManagerLibrary(class APrimalCharacter* CharacterOwner, class UClass* managerClass, class APrimalBuff** chargeManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.CharacterCreateChargeManagerLibrary");

	UChargeFunctions_FakeLibrary_C_CharacterCreateChargeManagerLibrary_Params params;
	params.CharacterOwner = CharacterOwner;
	params.managerClass = managerClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (chargeManager != nullptr)
		*chargeManager = params.chargeManager;
}


// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.ExecuteUbergraph_ChargeFunctions_FakeLibrary
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UChargeFunctions_FakeLibrary_C::ExecuteUbergraph_ChargeFunctions_FakeLibrary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.ExecuteUbergraph_ChargeFunctions_FakeLibrary");

	UChargeFunctions_FakeLibrary_C_ExecuteUbergraph_ChargeFunctions_FakeLibrary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
