#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_PlantSpeciesY_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Structure_PlantSpeciesY.Structure_PlantSpeciesY_C
// 0x0009 (0x0B69 - 0x0B60)
class AStructure_PlantSpeciesY_C : public ABaseBearTrap_C
{
public:
	float                                              DecayRate;                                                // 0x0B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmountOfDecay;                                            // 0x0B64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0B68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Structure_PlantSpeciesY.Structure_PlantSpeciesY_C");
		return ptr;
	}


	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void BPNotifyImmobilizedCharacterIsDeadOrInConscious(bool* IsDead, bool* IsConscious);
	void BPNotifyImmobilizedCharacterIsDead();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PeriodicDamage();
	void ExecuteUbergraph_Structure_PlantSpeciesY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
