#pragma once

// ARKSurvivalEvolved (318.14) SDK

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
// 0x0038 (0x0BB0 - 0x0B78)
class ATransGPSCharge_C : public APrimalStructureExplosiveTransGPS
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0B78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
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
