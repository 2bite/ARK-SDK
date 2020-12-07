#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_SunGlasses_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C
// 0x0020 (0x0A08 - 0x09E8)
class UPrimalItemSkin_SunGlasses_C : public UPrimalItemSkinGeneric_C
{
public:
	class UStaticMeshComponent*                        SunglassesMeshComponent;                                  // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 SunglassesMesh;                                           // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HoldingSocketName;                                        // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GlassesSocketName;                                        // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C");
		return ptr;
	}


	void OrbitCameraChanged(bool bEnabled);
	void EnteredThirdPerson();
	void EnteredFirstPerson();
	void CreateSunglassesComponent(class USkeletalMeshComponent* ParentComponent, bool* Created);
	void BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void ExecuteUbergraph_PrimalItemSkin_SunGlasses(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
