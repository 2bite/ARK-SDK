#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChargeFunctions_FakeLibrary_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UChargeFunctions_FakeLibrary_C : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C");
		return ptr;
	}


	void STATIC_Buff_Create_Charge_Manager_No_Instigator_Library(class APrimalBuff* Buff, class UClass* managerClass, class APrimalBuff** chargeManager);
	void Charge_Variable_Event_Integer_Library(TEnumAsByte<E_ChargeVariableNames> variableType, int dValue, class AActor* OwnerActor, class APrimalBuff* managerBuff, bool multicastEvent);
	void Get_Charge_At_Point_Accurate(const struct FVector& Location, class AActor* worldActor, float Radius, class UClass* chargeEmitterClass, float* Charge);
	void Charge_Variable_Event_Double_Library(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue, class AActor* OwnerActor, class APrimalBuff* managerBuff, bool multicastEvent);
	void Charge_Variable_Event_Float_Library(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue, class AActor* OwnerActor, class APrimalBuff* managerBuff, bool multicastEvent);
	void Charge_Variable_Event_Boolean_Library(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, class AActor* OwnerActor, class APrimalBuff* managerBuff, bool multicastEvent);
	void GetChargeAtActorAccurate(const struct FVector& Location, class AActor* FromActor, float Radius, class UClass* chargeEmitterClass, float* Charge);
	void Buff_Create_Charge_Manager_Library(class APrimalBuff* Buff, class UClass* managerClass, class APrimalBuff** chargeManager);
	void STATIC_Structure_Create_Charge_Manager_Library(class APrimalStructure* Structure, class UClass* managerClass, class APrimalBuff** chargeManager);
	void Weapon_Create_Charge_Manager_Library(class AShooterWeapon* weapon, class UClass* managerClass, class APrimalBuff** chargeManager);
	void ChargeVariableEventLibrary(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, class AActor* OwnerActor, class APrimalBuff* managerBuff, bool multicastEvent);
	void CharacterCreateChargeManagerLibrary(class APrimalCharacter* CharacterOwner, class UClass* managerClass, class APrimalBuff** chargeManager);
	void ExecuteUbergraph_ChargeFunctions_FakeLibrary(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
