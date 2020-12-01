#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Argent_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Argent_Character_BP.Argent_Character_BP_C
// 0x0060 (0x2168 - 0x2108)
class AArgent_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Argent_C*   DinoCharacterStatus_BP_Argent_C1;                         // 0x2108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastGrabTime;                                             // 0x2110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RegenBuffClass;                                           // 0x2118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeatherTime;                                              // 0x2120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BeakPassengerSlot;                                        // 0x2124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ClawsPassengerSlot;                                       // 0x2128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseBeakMassLimit;                                         // 0x212C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x212D(0x0003) MISSED OFFSET
	float                                              BeakCarryMassLimit;                                       // 0x2130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseClawsMassLimit;                                        // 0x2134(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2135(0x0003) MISSED OFFSET
	float                                              ClawsCarryMassLimit;                                      // 0x2138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x213C(0x0004) MISSED OFFSET
	class UAnimMontage*                                ClawCarryAnim;                                            // 0x2140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                BeakCarryAnim;                                            // 0x2148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                BeakAndClawCarryAnim;                                     // 0x2150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateCarryAnimAfterAttack;                               // 0x2158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x2159(0x0007) MISSED OFFSET
	class UAnimMontage*                                BeakCarryGroundAnim;                                      // 0x2160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Argent_Character_BP.Argent_Character_BP_C");
		return ptr;
	}


	void BPDidClearCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter);
	void Allow_Passenger_in_Slot(class APrimalCharacter* Character, int Slot, bool* Allowed);
	bool BPAllowCarryCharacter(class APrimalCharacter** checkCharacter);
	void Remove_Passenger_In_Slot(int Slot);
	void Get_Passenger(int Slot, class APrimalCharacter** Char);
	void Has_Passenger_In_Slot(int Slot, bool* Return_Value);
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void BPDoAttack(int* AttackIndex);
	void UpdateCarryAnim();
	void BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode);
	void ReceiveBeginPlay();
	void BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex);
	void ReceiveTick(float* DeltaSeconds);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	bool BPCanTakePassenger(class APrimalCharacter** Character, int* PassengerSeatIndex, bool* bForcePassenger, bool* bAllowFlyersAndWaterDinos);
	void BPNotifyAddPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex);
	void UserConstructionScript();
	void MulticastOnAttack();
	void MulticastUpdateCarryAnim();
	void ExecuteUbergraph_Argent_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
