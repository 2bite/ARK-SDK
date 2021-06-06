#pragma once

// ARKSurvivalEvolved (329.9) SDK

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
// 0x0040 (0x0BE0 - 0x0BA0)
class ATransGPSCharge_C : public APrimalStructureExplosiveTransGPS
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0BA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0BA8(0x0008) MISSED OFFSET
	struct UObject_FTransform                          RelativeTransform;                                        // 0x0BB0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TransGPSCharge.TransGPSCharge_C");
		return ptr;
	}


	void BPPostLoadedFromSaveGame();
	void STATIC_BPPlacedStructure(class APlayerController** ForPC);
	void UserConstructionScript();
	void ExecuteUbergraph_TransGPSCharge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
