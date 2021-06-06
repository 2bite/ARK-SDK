#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OceanPlatform_Base_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OceanPlatform_Base_BP.OceanPlatform_Base_BP_C
// 0x0038 (0x0B20 - 0x0AE8)
class AOceanPlatform_Base_BP_C : public AStructureBaseBP_C
{
public:
	float                                              LostHealthPercentagePerMin;                               // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AEC(0x0004) MISSED OFFSET
	double                                             LastTimeSelfDamaged;                                      // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               LadderSocketNames;                                        // 0x0AF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class APortableRope_Ladder_Preplaced_C*>    Ladders;                                                  // 0x0B08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	double                                             LastSelfDamageTime;                                       // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OceanPlatform_Base_BP.OceanPlatform_Base_BP_C");
		return ptr;
	}


	void ThrottledTick();
	void BPOnDemolish(class APlayerController** ForPC, class AActor** DamageCauser);
	void SetRetract_Ladders(bool Retract);
	void UpdateLadderHeight();
	void STATIC_BuildLadders(class APlayerController* PlayerController, bool UpdateHeight);
	void BPPlacedStructure(class APlayerController** ForPC);
	void SelfDamage();
	void ReceiveBeginPlay();
	int BPIsAllowedToBuild(int* CurrentAllowedReason, struct FPlacementData* OutPlacementData);
	void UserConstructionScript();
	void ExecuteUbergraph_OceanPlatform_Base_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
