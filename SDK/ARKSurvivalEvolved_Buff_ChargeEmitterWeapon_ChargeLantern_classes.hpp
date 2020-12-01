#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitterWeapon_ChargeLantern_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C
// 0x000C (0x0B88 - 0x0B7C)
class ABuff_ChargeEmitterWeapon_ChargeLantern_C : public ABuff_ChargeEmitterWeapon_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B7C(0x0004) MISSED OFFSET
	class UStaticMesh*                                 chargeEffectMeshOverride;                                 // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C");
		return ptr;
	}


	void IsWeaponFiring(bool* IsFiring);
	void InitializeEmitter();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ChargeEmitterWeapon_ChargeLantern(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
