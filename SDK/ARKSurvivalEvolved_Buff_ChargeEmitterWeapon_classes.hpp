#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitterWeapon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C
// 0x0034 (0x0BAC - 0x0B78)
class ABuff_ChargeEmitterWeapon_C : public ABuff_ChargeEmitter_C
{
public:
	struct FVector                                     K2Node_CustomEvent_NewParam;                              // 0x0B78(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_CustomEvent_NewParam1;                             // 0x0B84(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_NewParam2;                             // 0x0B94(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_NewParam12;                            // 0x0BA0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C");
		return ptr;
	}


	void IsWeaponFiring(bool* IsFiring);
	void InitializeEmitter();
	void GetEmitterForwardVector(struct FVector* ForwardVector);
	void CanEmitCharge(bool* canEmit);
	void UserConstructionScript();
	void DebugVector(const struct FVector& NewParam, const struct FVector& NewParam1);
	void DebugSphere(const struct FVector& NewParam, const struct FLinearColor& NewParam1);
	void ExecuteUbergraph_Buff_ChargeEmitterWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
