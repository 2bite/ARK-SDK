#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_KingKaijuHealthbar_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_KingKaijuHealthbar.Buff_KingKaijuHealthbar_C
// 0x0218 (0x0AB8 - 0x08A0)
class ABuff_KingKaijuHealthbar_C : public APrimalBuff
{
public:
	struct FHUDElement                                 KKHealthBar_HudEle;                                       // 0x08A0(0x00B0) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FHUDElement                                 KKHealthBarLabel_HudEle;                                  // 0x0950(0x00B0) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	float                                              HUDColorAlpha;                                            // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A04(0x0004) MISSED OFFSET
	struct FHUDElement                                 KKHealthBarLabel2_HudEle;                                 // 0x0A08(0x00B0) (Edit, BlueprintVisible, Net, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_KingKaijuHealthbar.Buff_KingKaijuHealthbar_C");
		return ptr;
	}


	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void UserConstructionScript();
	void Server_Deactivate();
	void ExecuteUbergraph_Buff_KingKaijuHealthbar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
