#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x0060 (0x04B0 - 0x0450)
class ARiver_Spline_C : public AActor
{
public:
	class USplineComponent*                            Spline1;                                                  // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WidthEnd;                                                 // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WidthStart;                                               // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseScale;                                                // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          Material;                                                 // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Static_Mesh;                                              // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  CallFunc_AddComponent_RelativeTransform_AddComponentDefaultTransform;// 0x0480(0x0030) (Transient, DuplicateTransient, IsPlainOldData)

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
