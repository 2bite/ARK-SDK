#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapHarpoon_Net_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapHarpoon_Net.WeapHarpoon_Net_C
// 0x0040 (0x0E80 - 0x0E40)
class AWeapHarpoon_Net_C : public AWeapHarpoon_C
{
public:
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CrosshairMID;                                             // 0x0E48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          CrosshairMaterial;                                        // 0x0E50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrosshairSize;                                            // 0x0E58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E5C(0x0004) MISSED OFFSET
	class UClass*                                      WeaponHelperBuffClass;                                    // 0x0E60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GetAimedActorCheckRadius;                                 // 0x0E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                CrosshairColor;                                           // 0x0E6C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrosshairMaterialSize;                                    // 0x0E7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapHarpoon_Net.WeapHarpoon_Net_C");
		return ptr;
	}


	void Remote_Set_Crosshair_Size(float InSize, float* OutSize);
	void Remote_Set_Crosshair_Color(const struct FLinearColor& InColor, struct FLinearColor* outColor);
	void GetHudData(class UClass** ProjectileClass, struct FVector* SocketLocation, struct FVector* FireDirection, float* AimedTargetCheckRadius, bool* IsFPV);
	struct FColor BPGetCrosshairColor();
	void BPStartEquippedNotify();
	void StartUnequipEvent();
	void ReceiveDestroyed();
	void GetCrosshairColor(struct FLinearColor* Color);
	void BPDrawHud(class AShooterHUD** HUD);
	void UserConstructionScript();
	void ExecuteUbergraph_WeapHarpoon_Net(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
