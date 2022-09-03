// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeManager_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ChargeManager.Buff_ChargeManager_C.ManagerCustomEvent
// ()
// Parameters:
// class AActor*                  requestingActor                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_ChargeManagerType> requiresManagerOfType          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::ManagerCustomEvent(class AActor* requestingActor, TEnumAsByte<E_ChargeManagerType> requiresManagerOfType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.ManagerCustomEvent");

	ABuff_ChargeManager_C_ManagerCustomEvent_Params params;
	params.requestingActor = requestingActor;
	params.requiresManagerOfType = requiresManagerOfType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.ManagerIsBuffOfType
// ()
// Parameters:
// TEnumAsByte<E_ChargeManagerType> typeToCheck                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isOfType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::ManagerIsBuffOfType(TEnumAsByte<E_ChargeManagerType> typeToCheck, bool* isOfType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.ManagerIsBuffOfType");

	ABuff_ChargeManager_C_ManagerIsBuffOfType_Params params;
	params.typeToCheck = typeToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isOfType != nullptr)
		*isOfType = params.isOfType;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.Should Receive Charge FromEmitter
// ()
// Parameters:
// class ABuff_ChargeEmitter_C*   Emitter                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           shouldReceive                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::Should_Receive_Charge_FromEmitter(class ABuff_ChargeEmitter_C* Emitter, bool* shouldReceive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Should Receive Charge FromEmitter");

	ABuff_ChargeManager_C_Should_Receive_Charge_FromEmitter_Params params;
	params.Emitter = Emitter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldReceive != nullptr)
		*shouldReceive = params.shouldReceive;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.GetChargeVariableExternalManager
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::GetChargeVariableExternalManager(TEnumAsByte<E_ChargeVariableNames> variableType, float* fValue, double* dValue, bool* bBValue, int* iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.GetChargeVariableExternalManager");

	ABuff_ChargeManager_C_GetChargeVariableExternalManager_Params params;
	params.variableType = variableType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (fValue != nullptr)
		*fValue = params.fValue;
	if (dValue != nullptr)
		*dValue = params.dValue;
	if (bBValue != nullptr)
		*bBValue = params.bBValue;
	if (iValue != nullptr)
		*iValue = params.iValue;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.Update Tick Delta Time
// ()
// Parameters:
// float                          deltaTimeServer                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          deltaTimeClient                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::Update_Tick_Delta_Time(float* deltaTimeServer, float* deltaTimeClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Update Tick Delta Time");

	ABuff_ChargeManager_C_Update_Tick_Delta_Time_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (deltaTimeServer != nullptr)
		*deltaTimeServer = params.deltaTimeServer;
	if (deltaTimeClient != nullptr)
		*deltaTimeClient = params.deltaTimeClient;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.ForceEnableTimer
// ()
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::ForceEnableTimer(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.ForceEnableTimer");

	ABuff_ChargeManager_C_ForceEnableTimer_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.On Batteries Charged Client
// ()
// Parameters:
// float                          chargeAdded                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::On_Batteries_Charged_Client(float chargeAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.On Batteries Charged Client");

	ABuff_ChargeManager_C_On_Batteries_Charged_Client_Params params;
	params.chargeAdded = chargeAdded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.Batteries Logic Client
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::Batteries_Logic_Client(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Batteries Logic Client");

	ABuff_ChargeManager_C_Batteries_Logic_Client_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.Pre Timer Modify Charge Actions
// ()
// Parameters:
// bool                           shouldSkipModify               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::Pre_Timer_Modify_Charge_Actions(bool* shouldSkipModify)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Pre Timer Modify Charge Actions");

	ABuff_ChargeManager_C_Pre_Timer_Modify_Charge_Actions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldSkipModify != nullptr)
		*shouldSkipModify = params.shouldSkipModify;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.Get Charge Actor Inventory And Items
// ()
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPrimalItem*>     ownerItems                     (Parm, OutParm, ZeroConstructor)
// class UPrimalInventoryComponent* actorInventory                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::Get_Charge_Actor_Inventory_And_Items(class AActor* OwnerActor, TArray<class UPrimalItem*>* ownerItems, class UPrimalInventoryComponent** actorInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Get Charge Actor Inventory And Items");

	ABuff_ChargeManager_C_Get_Charge_Actor_Inventory_And_Items_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ownerItems != nullptr)
		*ownerItems = params.ownerItems;
	if (actorInventory != nullptr)
		*actorInventory = params.actorInventory;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.Add Charge To Batteries Parallel
// ()
// Parameters:
// float                          amountToAddPerBattery          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  inventoryOwner                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           takeChargeFromBuff             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicastCharge                (Parm, ZeroConstructor, IsPlainOldData)
// float                          maxChargeToAdd                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceUseAllCharge              (Parm, ZeroConstructor, IsPlainOldData)
// float                          chargeAddedToBattery           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            accessedBatteries              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::Add_Charge_To_Batteries_Parallel(float amountToAddPerBattery, class AActor* inventoryOwner, bool takeChargeFromBuff, bool multicastCharge, float maxChargeToAdd, bool ForceUseAllCharge, float* chargeAddedToBattery, int* accessedBatteries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Add Charge To Batteries Parallel");

	ABuff_ChargeManager_C_Add_Charge_To_Batteries_Parallel_Params params;
	params.amountToAddPerBattery = amountToAddPerBattery;
	params.inventoryOwner = inventoryOwner;
	params.takeChargeFromBuff = takeChargeFromBuff;
	params.multicastCharge = multicastCharge;
	params.maxChargeToAdd = maxChargeToAdd;
	params.ForceUseAllCharge = ForceUseAllCharge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (chargeAddedToBattery != nullptr)
		*chargeAddedToBattery = params.chargeAddedToBattery;
	if (accessedBatteries != nullptr)
		*accessedBatteries = params.accessedBatteries;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.GetChargePercent
// ()
// Parameters:
// float                          OutPercent                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::GetChargePercent(float* OutPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.GetChargePercent");

	ABuff_ChargeManager_C_GetChargePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPercent != nullptr)
		*OutPercent = params.OutPercent;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.ShouldExecuteBatteriesLogic
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::ShouldExecuteBatteriesLogic(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.ShouldExecuteBatteriesLogic");

	ABuff_ChargeManager_C_ShouldExecuteBatteriesLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.DestroyBuff
// ()

void ABuff_ChargeManager_C::DestroyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.DestroyBuff");

	ABuff_ChargeManager_C_DestroyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.AddChargeToBattery
// ()
// Parameters:
// class UPrimalItem_ChargeBattery_C* battery                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           takeChargeFromBuff             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicastCharge                (Parm, ZeroConstructor, IsPlainOldData)
// float                          chargeToAdd                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          chargeAddedToBattery           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          chargeTakenFromBuff            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::AddChargeToBattery(class UPrimalItem_ChargeBattery_C* battery, bool takeChargeFromBuff, bool multicastCharge, float chargeToAdd, float* chargeAddedToBattery, float* chargeTakenFromBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.AddChargeToBattery");

	ABuff_ChargeManager_C_AddChargeToBattery_Params params;
	params.battery = battery;
	params.takeChargeFromBuff = takeChargeFromBuff;
	params.multicastCharge = multicastCharge;
	params.chargeToAdd = chargeToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (chargeAddedToBattery != nullptr)
		*chargeAddedToBattery = params.chargeAddedToBattery;
	if (chargeTakenFromBuff != nullptr)
		*chargeTakenFromBuff = params.chargeTakenFromBuff;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.Batteries Logic Server
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::Batteries_Logic_Server(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Batteries Logic Server");

	ABuff_ChargeManager_C_Batteries_Logic_Server_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.Take Charge from Batteries
// ()
// Parameters:
// float                          amountToTake                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  inventoryOwner                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           addChargeToBuff                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           updateItem                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicastCharge                (Parm, ZeroConstructor, IsPlainOldData)
// float                          chargeTaken                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            accessedBatteries              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::Take_Charge_from_Batteries(float amountToTake, class AActor* inventoryOwner, bool addChargeToBuff, bool updateItem, bool multicastCharge, float* chargeTaken, int* accessedBatteries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Take Charge from Batteries");

	ABuff_ChargeManager_C_Take_Charge_from_Batteries_Params params;
	params.amountToTake = amountToTake;
	params.inventoryOwner = inventoryOwner;
	params.addChargeToBuff = addChargeToBuff;
	params.updateItem = updateItem;
	params.multicastCharge = multicastCharge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (chargeTaken != nullptr)
		*chargeTaken = params.chargeTaken;
	if (accessedBatteries != nullptr)
		*accessedBatteries = params.accessedBatteries;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.Add Charge to Batteries
// ()
// Parameters:
// float                          amountToAdd                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  inventoryOwner                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           takeChargeFromBuff             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicastCharge                (Parm, ZeroConstructor, IsPlainOldData)
// float                          chargeAddedToBattery           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            accessedBatteries              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::Add_Charge_to_Batteries(float amountToAdd, class AActor* inventoryOwner, bool takeChargeFromBuff, bool multicastCharge, float* chargeAddedToBattery, int* accessedBatteries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Add Charge to Batteries");

	ABuff_ChargeManager_C_Add_Charge_to_Batteries_Params params;
	params.amountToAdd = amountToAdd;
	params.inventoryOwner = inventoryOwner;
	params.takeChargeFromBuff = takeChargeFromBuff;
	params.multicastCharge = multicastCharge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (chargeAddedToBattery != nullptr)
		*chargeAddedToBattery = params.chargeAddedToBattery;
	if (accessedBatteries != nullptr)
		*accessedBatteries = params.accessedBatteries;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.OnBatteryItemChange
// ()

void ABuff_ChargeManager_C::OnBatteryItemChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.OnBatteryItemChange");

	ABuff_ChargeManager_C_OnBatteryItemChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.Has Relevant Battery in Inventory
// ()
// Parameters:
// bool                           shouldExecuteLogic             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::Has_Relevant_Battery_in_Inventory(bool* shouldExecuteLogic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Has Relevant Battery in Inventory");

	ABuff_ChargeManager_C_Has_Relevant_Battery_in_Inventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldExecuteLogic != nullptr)
		*shouldExecuteLogic = params.shouldExecuteLogic;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.Check BatteriesAndUpdate
// ()

void ABuff_ChargeManager_C::Check_BatteriesAndUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Check BatteriesAndUpdate");

	ABuff_ChargeManager_C_Check_BatteriesAndUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.ChargeVariableEvent
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::ChargeVariableEvent(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.ChargeVariableEvent");

	ABuff_ChargeManager_C_ChargeVariableEvent_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.SetChargeVariable
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicast                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           triggerEvent                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicastEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::SetChargeVariable(TEnumAsByte<E_ChargeVariableNames> variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.SetChargeVariable");

	ABuff_ChargeManager_C_SetChargeVariable_Params params;
	params.variableType = variableType;
	params.multicast = multicast;
	params.fValue = fValue;
	params.dValue = dValue;
	params.bBValue = bBValue;
	params.triggerEvent = triggerEvent;
	params.multicastEvent = multicastEvent;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.Get Charge Variable
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> VariableName                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::Get_Charge_Variable(TEnumAsByte<E_ChargeVariableNames> VariableName, float* fValue, double* dValue, bool* bBValue, int* iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Get Charge Variable");

	ABuff_ChargeManager_C_Get_Charge_Variable_Params params;
	params.VariableName = VariableName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (fValue != nullptr)
		*fValue = params.fValue;
	if (dValue != nullptr)
		*dValue = params.dValue;
	if (bBValue != nullptr)
		*bBValue = params.bBValue;
	if (iValue != nullptr)
		*iValue = params.iValue;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.GetChargeMultiplierForSource
// ()
// Parameters:
// class ABuff_ChargeEmitter_C*   buffSource                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isHarvesting                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Multiplier                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::GetChargeMultiplierForSource(class ABuff_ChargeEmitter_C* buffSource, bool isHarvesting, float* Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.GetChargeMultiplierForSource");

	ABuff_ChargeManager_C_GetChargeMultiplierForSource_Params params;
	params.buffSource = buffSource;
	params.isHarvesting = isHarvesting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Multiplier != nullptr)
		*Multiplier = params.Multiplier;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.AddChargeSource
// ()
// Parameters:
// class ABuff_ChargeEmitter_C*   Source                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::AddChargeSource(class ABuff_ChargeEmitter_C* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.AddChargeSource");

	ABuff_ChargeManager_C_AddChargeSource_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.ShouldEnableTimers
// ()
// Parameters:
// bool                           tickServer                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           TickClient                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::ShouldEnableTimers(bool* tickServer, bool* TickClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.ShouldEnableTimers");

	ABuff_ChargeManager_C_ShouldEnableTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (tickServer != nullptr)
		*tickServer = params.tickServer;
	if (TickClient != nullptr)
		*TickClient = params.TickClient;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.InitializeManager
// ()
// Parameters:
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::InitializeManager(class AActor* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.InitializeManager");

	ABuff_ChargeManager_C_InitializeManager_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.EnableTimersIfNeeded
// ()

void ABuff_ChargeManager_C::EnableTimersIfNeeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.EnableTimersIfNeeded");

	ABuff_ChargeManager_C_EnableTimersIfNeeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.Should Update Charge On Timer
// ()
// Parameters:
// bool                           shouldUpdateWithTimer          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::Should_Update_Charge_On_Timer(bool* shouldUpdateWithTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Should Update Charge On Timer");

	ABuff_ChargeManager_C_Should_Update_Charge_On_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldUpdateWithTimer != nullptr)
		*shouldUpdateWithTimer = params.shouldUpdateWithTimer;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.IsGainingCharge
// ()
// Parameters:
// bool                           IsGainingCharge                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::IsGainingCharge(bool* IsGainingCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.IsGainingCharge");

	ABuff_ChargeManager_C_IsGainingCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsGainingCharge != nullptr)
		*IsGainingCharge = params.IsGainingCharge;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.IsGettingCharge
// ()
// Parameters:
// bool                           IsGettingCharge                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::IsGettingCharge(bool* IsGettingCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.IsGettingCharge");

	ABuff_ChargeManager_C_IsGettingCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsGettingCharge != nullptr)
		*IsGettingCharge = params.IsGettingCharge;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.CalculateChargeReceivedPerSecond
// ()
// Parameters:
// float                          receivedCharge                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::CalculateChargeReceivedPerSecond(float* receivedCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.CalculateChargeReceivedPerSecond");

	ABuff_ChargeManager_C_CalculateChargeReceivedPerSecond_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (receivedCharge != nullptr)
		*receivedCharge = params.receivedCharge;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.OnChargeEvent
// ()

void ABuff_ChargeManager_C::OnChargeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.OnChargeEvent");

	ABuff_ChargeManager_C_OnChargeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.IsFirstCharge
// ()
// Parameters:
// bool                           IsFirstCharge                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::IsFirstCharge(bool* IsFirstCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.IsFirstCharge");

	ABuff_ChargeManager_C_IsFirstCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFirstCharge != nullptr)
		*IsFirstCharge = params.IsFirstCharge;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.BuffTickClient");

	ABuff_ChargeManager_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.Modify Charge
// ()
// Parameters:
// bool                           SetValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicast                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           triggerEvent                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicastEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          chargeAdded                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::Modify_Charge(bool SetValue, float amount, bool multicast, bool triggerEvent, bool multicastEvent, float* chargeAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Modify Charge");

	ABuff_ChargeManager_C_Modify_Charge_Params params;
	params.SetValue = SetValue;
	params.amount = amount;
	params.multicast = multicast;
	params.triggerEvent = triggerEvent;
	params.multicastEvent = multicastEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (chargeAdded != nullptr)
		*chargeAdded = params.chargeAdded;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.Update Charge on Timer
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::Update_Charge_on_Timer(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Update Charge on Timer");

	ABuff_ChargeManager_C_Update_Charge_on_Timer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.Get ChargeInEnvironment
// ()
// Parameters:
// bool                           getRawValue                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          receivedCharge                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::Get_ChargeInEnvironment(bool getRawValue, float* receivedCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Get ChargeInEnvironment");

	ABuff_ChargeManager_C_Get_ChargeInEnvironment_Params params;
	params.getRawValue = getRawValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (receivedCharge != nullptr)
		*receivedCharge = params.receivedCharge;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.BuffTickServer");

	ABuff_ChargeManager_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.OnReceivedCharge
// ()
// Parameters:
// float                          chargeAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::OnReceivedCharge(float chargeAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.OnReceivedCharge");

	ABuff_ChargeManager_C_OnReceivedCharge_Params params;
	params.chargeAmount = chargeAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.CanReceive Charge
// ()
// Parameters:
// bool                           canReceive                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::CanReceive_Charge(bool* canReceive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.CanReceive Charge");

	ABuff_ChargeManager_C_CanReceive_Charge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canReceive != nullptr)
		*canReceive = params.canReceive;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.UserConstructionScript
// ()

void ABuff_ChargeManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.UserConstructionScript");

	ABuff_ChargeManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.OnIsReceiverChange
// ()

void ABuff_ChargeManager_C::OnIsReceiverChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.OnIsReceiverChange");

	ABuff_ChargeManager_C_OnIsReceiverChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager.Buff_ChargeManager_C.ExecuteUbergraph_Buff_ChargeManager
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_C::ExecuteUbergraph_Buff_ChargeManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.ExecuteUbergraph_Buff_ChargeManager");

	ABuff_ChargeManager_C_ExecuteUbergraph_Buff_ChargeManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
