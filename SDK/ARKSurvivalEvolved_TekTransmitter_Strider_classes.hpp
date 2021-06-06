#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekTransmitter_Strider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekTransmitter_Strider.TekTransmitter_Strider_C
// 0x0020 (0x0E48 - 0x0E28)
class ATekTransmitter_Strider_C : public AStorageBox_TekTransmitter_C
{
public:
	class USkeletalMeshComponent*                      TekStriderSkeletalMesh;                                   // 0x0E28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Activated_vfx;                                            // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_TekTransmitter_Strider_C* PrimalInventoryBP_TekTransmitter_Strider_C1;              // 0x0E38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      body_VFX_buff_for_active_transmitter;                     // 0x0E40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekTransmitter_Strider.TekTransmitter_Strider_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void BPContainerDeactivated();
	void BPContainerActivated();
	void BPPreInitializeComponents();
	bool BPCanBeActivatedByPlayer(class AShooterPlayerController** PC);
	void UserConstructionScript();
	void ExecuteUbergraph_TekTransmitter_Strider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
