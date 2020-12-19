#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChargeFunctions_FakeLibrary_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Buff Create Charge Manager No Instigator Library
struct UChargeFunctions_FakeLibrary_C_Buff_Create_Charge_Manager_No_Instigator_Library_Params
{
	class APrimalBuff*                                 Buff;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      managerClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff*                                 chargeManager;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Charge Variable Event Integer Library
struct UChargeFunctions_FakeLibrary_C_Charge_Variable_Event_Integer_Library_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff*                                 managerBuff;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicastEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Get Charge At Point Accurate
struct UChargeFunctions_FakeLibrary_C_Get_Charge_At_Point_Accurate_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      worldActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      chargeEmitterClass;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Charge;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Charge Variable Event Double Library
struct UChargeFunctions_FakeLibrary_C_Charge_Variable_Event_Double_Library_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff*                                 managerBuff;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicastEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Charge Variable Event Float Library
struct UChargeFunctions_FakeLibrary_C_Charge_Variable_Event_Float_Library_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff*                                 managerBuff;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicastEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Charge Variable Event Boolean Library
struct UChargeFunctions_FakeLibrary_C_Charge_Variable_Event_Boolean_Library_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff*                                 managerBuff;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicastEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.GetChargeAtActorAccurate
struct UChargeFunctions_FakeLibrary_C_GetChargeAtActorAccurate_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      FromActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      chargeEmitterClass;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Charge;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Buff Create Charge Manager Library
struct UChargeFunctions_FakeLibrary_C_Buff_Create_Charge_Manager_Library_Params
{
	class APrimalBuff*                                 Buff;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      managerClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff*                                 chargeManager;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Structure Create Charge Manager Library
struct UChargeFunctions_FakeLibrary_C_Structure_Create_Charge_Manager_Library_Params
{
	class APrimalStructure*                            Structure;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      managerClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff*                                 chargeManager;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Weapon Create Charge Manager Library
struct UChargeFunctions_FakeLibrary_C_Weapon_Create_Charge_Manager_Library_Params
{
	class AShooterWeapon*                              weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      managerClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff*                                 chargeManager;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.ChargeVariableEventLibrary
struct UChargeFunctions_FakeLibrary_C_ChargeVariableEventLibrary_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff*                                 managerBuff;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicastEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.CharacterCreateChargeManagerLibrary
struct UChargeFunctions_FakeLibrary_C_CharacterCreateChargeManagerLibrary_Params
{
	class APrimalCharacter*                            CharacterOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      managerClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff*                                 chargeManager;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.ExecuteUbergraph_ChargeFunctions_FakeLibrary
struct UChargeFunctions_FakeLibrary_C_ExecuteUbergraph_ChargeFunctions_FakeLibrary_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
