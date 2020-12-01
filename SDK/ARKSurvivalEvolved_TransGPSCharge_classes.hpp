#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TransGPSCharge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TransGPSCharge.TransGPSCharge_C
// 0x0040 (0x0BB0 - 0x0B70)
class ATransGPSCharge_C : public APrimalStructureExplosiveTransGPS
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B78(0x0008) MISSED OFFSET
	struct UObject_FTransform                          RelativeTransform;                                        // 0x0B80(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TransGPSCharge.TransGPSCharge_C");
		return ptr;
	}


	void BPPostLoadedFromSaveGame();
	void BPPlacedStructure(class APlayerController** ForPC);
	void UserConstructionScript();
	void ExecuteUbergraph_TransGPSCharge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
