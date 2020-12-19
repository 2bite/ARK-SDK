#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Radiation_Indicator_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Radiation_Indicator.Buff_Radiation_Indicator_C
// 0x0030 (0x0980 - 0x0950)
class ABuff_Radiation_Indicator_C : public ABuff_Base_OnlyRelevantToOwner_C
{
public:
	class UClass*                                      RadiationBuff;                                            // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InsideTekForcefield;                                      // 0x0958(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasBuffThatMutesSound;                                    // 0x0959(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x095A(0x0006) MISSED OFFSET
	TArray<class UClass*>                              MuteSoundWhenHasOtherBuff;                                // 0x0960(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              CallFunc_SphereOverlapActors_NEW_ActorsToIgnore_RefProperty;// 0x0970(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Radiation_Indicator.Buff_Radiation_Indicator_C");
		return ptr;
	}


	void BPNotifyOtherBuffDeactivated(class APrimalBuff** OtherBuff);
	void BPNotifyOtherBuffActivated(class APrimalBuff** OtherBuff);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void Set_Radiation_Indicator_Hidden(bool HideIcon, bool MuteSound);
	void BuffTickServer(float* DeltaTime);
	void Is_Instigator_Near_Tek_Forcefield(class AStorageBox_TekShield_C* TekShield, bool* IsInsideShield);
	void BuffTickClient(float* DeltaTime);
	void BPResetBuffStart();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Radiation_Indicator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
