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
// 0x0038 (0x0B90 - 0x0B58)
class ATransGPSCharge_C : public APrimalStructureExplosiveTransGPS
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0B58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // 0x0B60(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData)

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
