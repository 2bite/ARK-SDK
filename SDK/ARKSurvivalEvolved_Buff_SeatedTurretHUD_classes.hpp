#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SeatedTurretHUD_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_SeatedTurretHUD.Buff_SeatedTurretHUD_C
// 0x0070 (0x09D0 - 0x0960)
class ABuff_SeatedTurretHUD_C : public ABuff_Base_C
{
public:
	struct FHUDRichTextOverlayData                     SwitchAmmoInputTextOverlay;                               // 0x0960(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasSwitchAmmoInputText;                                   // 0x09C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x09C1(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    ShooterPC;                                                // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_SeatedTurretHUD.Buff_SeatedTurretHUD_C");
		return ptr;
	}


	void NotifyDismount();
	void STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_SeatedTurretHUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
