#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretBaseBP_Heavy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureTurretBaseBP_Heavy.StructureTurretBaseBP_Heavy_C
// 0x000F (0x0EE8 - 0x0ED9)
class AStructureTurretBaseBP_Heavy_C : public AStructureTurretBaseBP_BaseHeavy_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0ED9(0x0007) MISSED OFFSET
	class UPrimalInventoryBP_HeavyTurret_C*            PrimalInventoryBP_HeavyTurret_C1;                         // 0x0EE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureTurretBaseBP_Heavy.StructureTurretBaseBP_Heavy_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	int BPIsAllowedToBuildEx(int* CurrentAllowedReason, class APlayerController** PC, bool* bFinalPlacement, bool* bChoosingRotation, struct FPlacementData* OutPlacementData);
	void UserConstructionScript();
	void ExecuteUbergraph_StructureTurretBaseBP_Heavy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
