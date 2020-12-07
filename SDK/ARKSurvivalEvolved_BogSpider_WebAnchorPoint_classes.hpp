#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BogSpider_WebAnchorPoint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C
// 0x0030 (0x0498 - 0x0468)
class ABogSpider_WebAnchorPoint_C : public AActor
{
public:
	class UStaticMeshComponent*                        AnchorMesh_NoDepth;                                       // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        AnchorMesh;                                               // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_AnchorMaterial;                                       // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseAnchorRadius;                                         // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentAnchorRadius;                                      // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              OuterSphereScaleMult;                                     // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MID_AnchorMaterial_NoDepth;                               // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C");
		return ptr;
	}


	void IsAnchorVisible(bool* bResult);
	void GetAnchorRadiusMult(float* mult);
	void GetAnchorColor(struct FLinearColor* Color);
	void SetAnchorRadius(float NewRadius);
	void SetAnchorVisibility(bool bNewVisibility);
	void SetAnchorColor(const struct FLinearColor& WithColor);
	void UserConstructionScript();
	void ExecuteUbergraph_BogSpider_WebAnchorPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
