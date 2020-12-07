#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_River_Spline_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass River_Spline.River_Spline_C
// 0x0068 (0x04D0 - 0x0468)
class ARiver_Spline_C : public AActor
{
public:
	class USplineComponent*                            Spline1;                                                  // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WidthEnd;                                                 // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WidthStart;                                               // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseScale;                                                // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0484(0x0004) MISSED OFFSET
	class UMaterialInterface*                          Material;                                                 // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Static_Mesh;                                              // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0498(0x0008) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_AddComponent_RelativeTransform_AddComponentDefaultTransform;// 0x04A0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass River_Spline.River_Spline_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_River_Spline(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
