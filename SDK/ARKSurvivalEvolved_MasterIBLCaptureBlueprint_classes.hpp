#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MasterIBLCaptureBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MasterIBLCaptureBlueprint.MasterIBLCaptureBlueprint_C
// 0x0020 (0x0498 - 0x0478)
class AMasterIBLCaptureBlueprint_C : public ASphereReflectionCapture
{
public:
	class UStaticMeshComponent*                        probe;                                                    // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SphereMaterial;                                           // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Roughness;                                                // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Metallic;                                                 // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMirrored;                                                // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0491(0x0003) MISSED OFFSET
	float                                              Brightness;                                               // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MasterIBLCaptureBlueprint.MasterIBLCaptureBlueprint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MasterIBLCaptureBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
